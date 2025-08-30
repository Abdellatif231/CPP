
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack() : std::stack<T>() {std::cout << "Default constructor called" << std::endl;}
        
        MutantStack(const MutantStack& other) : std::stack<T>(other) {std::cout << "Copy constructor called" << std::endl;}
        
        MutantStack& operator=(const MutantStack& other) {
            std::cout << "Assignment operator called" << std::endl;
            if (this != &other) {
                std::stack<T>::operator=(other);
            }
            return *this;
        }
        
        ~MutantStack() {std::cout << "Destructor called" << std::endl;}

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
    
};

#endif
