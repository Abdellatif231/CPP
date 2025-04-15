#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    WrongAnimal::operator=(other);
    std::cout << "WrongCat assignment operator" << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Meow?? but I'm wrong" << std::endl;
}