#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <string>
# include <sys/time.h>
# include <iomanip>
# include <cstdlib>

class PmergeMe {
    private:
        std::vector<int>    _vec;
        std::deque<int>     _deque;

        void    parseInput(char **argv);
        void    vectorSort(std::vector<int> &container);
        void    dequeSort(std::deque<int> &container);
        void    displayBefore() const;
        void    displayAfter() const;

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        void    execute(int argc, char **argv);
};

#endif
