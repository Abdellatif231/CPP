#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    Animal::operator=(other);
    std::cout << "Dog assignment operator" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}