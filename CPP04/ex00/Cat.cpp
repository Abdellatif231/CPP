#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    Animal::operator=(other);
    std::cout << "Cat assignment operator" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}