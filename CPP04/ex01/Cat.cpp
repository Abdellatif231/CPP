#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
	delete brain;
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    Animal::operator=(other);
	delete brain;
	brain = new Brain(*other.brain);
    std::cout << "Cat assignment operator" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}
