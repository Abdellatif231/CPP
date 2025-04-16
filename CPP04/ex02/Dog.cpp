#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
	delete brain;
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	Animal::operator=(other);
	delete brain;
	brain = new Brain(*other.brain);
    std::cout << "Dog assignment operator" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}
