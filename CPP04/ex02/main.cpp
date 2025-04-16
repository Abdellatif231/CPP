#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

//	Animal a;

	Animal *a = new Dog();
	a->makeSound();
	delete a;
    return 0;
}
