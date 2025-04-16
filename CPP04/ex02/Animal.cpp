#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    type = other.type;
    std::cout << "Animal assignment operator" << std::endl;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "generic animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}