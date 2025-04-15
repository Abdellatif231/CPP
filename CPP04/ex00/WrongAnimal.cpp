#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    type = other.type;
    std::cout << "WrongAnimal assignment operator" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "wrong generic sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}