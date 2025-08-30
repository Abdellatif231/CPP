#include "MutantStack.hpp"
#include <list>

int main() 
{
    {
        MutantStack<int> mstack;

        mstack.push(10);
        mstack.push(23);

        std::cout << "Top: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size: " << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    std::cout << "\nTesting with list\n" << std::endl;

    {
        std::list<int> lst;

        lst.push_back(10);
        lst.push_back(23);

        std::cout << "Back: " << lst.back() << std::endl;
        lst.pop_back();
        std::cout << "Size: " << lst.size() << std::endl;

        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        lst.push_back(0);

        std::list<int>::iterator it = lst.begin();
        std::list<int>::iterator ite = lst.end();

        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }
}
