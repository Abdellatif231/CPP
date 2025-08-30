#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::vector<int>::iterator it = easyfind(vec, 2);
    if (it != vec.end()) {
        std::cout << "Found: " << *it << std::endl;
    }
    else {
        std::cout << "Not found!" << std::endl;
    }

	std::list<int> lst;
	lst.push_back(21);
	lst.push_back(12);
	lst.push_back(98);

	std::list<int>::iterator iter = easyfind(lst, 12);
	if (iter != lst.end())
		std::cout << "Found: " << *iter << std::endl;
	else
		std::cout << "Not found!" << std::endl;

    return 0;
}
