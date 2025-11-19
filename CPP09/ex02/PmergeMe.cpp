#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
    std::cout << "Default constructor called\n" << std::endl;
}

PmergeMe::~PmergeMe() {
    std::cout << "destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &other) : _vec(other._vec), _deque(other._deque) {
    std::cout << "copy constructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    if(this != &other) {
        _vec = other._vec;
        _deque = other._deque;
    }
    std::cout << "assingment constructor called" << std::endl;
    return *this;
}

void PmergeMe::parseInput(char **argv)
{
    for (int i = 1; argv[i]; ++i)
    {
        char *end;
        long value = std::strtol(argv[i], &end, 10);

        if (*end != '\0' || end == argv[i] || value <= 0)
            throw std::string("Error");
        _vec.push_back(static_cast<int>(value));
        _deque.push_back(static_cast<int>(value));
    }
    if (_vec.empty())
        throw std::string("Error");
}

void PmergeMe::vectorSort(std::vector<int> &container)
{
    if (container.size() <= 1)
        return ;

    std::vector<std::pair<int, int> > pairs;
    int straggler = -1;

    if (container.size() % 2 == 1)
        straggler = container.back(), container.pop_back();

    for (size_t i = 0; i < container.size(); i += 2)
    {
        int a = container[i];
        int b = container[i + 1];
        if (a < b)
            std::swap(a, b);
        pairs.push_back(std::make_pair(a, b)); // pair<large, small>
    }

    // Build main chain from large elements
    std::vector<int> main_chain;
    for (size_t i = 0; i < pairs.size(); ++i)
        main_chain.push_back(pairs[i].first);

    // Recursive sort on main chain
    vectorSort(main_chain);

    // Replace container with sorted main chain
    container = main_chain;

    // Insert small elements back (from end to reduce shifts in vector)
    for (int i = static_cast<int>(pairs.size()) - 1; i >= 0; --i)
    {
        std::vector<int>::iterator pos = std::lower_bound(container.begin(), container.end(), pairs[i].second);
        container.insert(pos, pairs[i].second);
    }

    // Insert straggler if exists
    if (straggler != -1)
    {
        std::vector<int>::iterator pos = std::lower_bound(container.begin(), container.end(), straggler);
        container.insert(pos, straggler);
    }
}

void PmergeMe::dequeSort(std::deque<int> &container)
{
    if (container.size() <= 1)
        return ;

    std::vector<std::pair<int, int> > pairs;
    int straggler = -1;

    if (container.size() % 2 == 1)
        straggler = container.back(), container.pop_back();

    for (size_t i = 0; i < container.size(); i += 2)
    {
        int a = container[i];
        int b = container[i + 1];
        if (a < b)
            std::swap(a, b);
        pairs.push_back(std::make_pair(a, b)); // pair<large, small>
    }

    // Build main chain from large elements
    std::deque<int> main_chain;
    for (size_t i = 0; i < pairs.size(); ++i)
        main_chain.push_back(pairs[i].first);

    // Recursive sort on main chain
    dequeSort(main_chain);

    // Replace container with sorted main chain
    container = main_chain;

    // Insert small elements back
    for (int i = static_cast<int>(pairs.size()) - 1; i >= 0; --i)
    {
        std::deque<int>::iterator pos = std::lower_bound(container.begin(), container.end(), pairs[i].second);
        container.insert(pos, pairs[i].second);
    }

    // Insert straggler if exists
    if (straggler != -1)
    {
        std::deque<int>::iterator pos = std::lower_bound(container.begin(), container.end(), straggler);
        container.insert(pos, straggler);
    }
}

void PmergeMe::displayBefore() const
{
    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size(); ++i)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::displayAfter() const
{
    std::cout << "After: ";
    for (size_t i = 0; i < _vec.size(); ++i)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::execute(int argc, char **argv)
{
    (void)argc;
    parseInput(argv);

    displayBefore();

    struct timeval start, end;

    gettimeofday(&start, NULL);
    vectorSort(_vec);
    gettimeofday(&end, NULL);
    double time_vec = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);

    gettimeofday(&start, NULL);
    dequeSort(_deque);
    gettimeofday(&end, NULL);
    double time_deque = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);

    displayAfter();

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : "
              << time_vec << " us" << std::endl;
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : "
              << time_deque << " us" << std::endl;
}
