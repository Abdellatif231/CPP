#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    try
    {
        PmergeMe    sorter;
        sorter.execute(argc, argv);
    }
    catch (...)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    return 0;
}
