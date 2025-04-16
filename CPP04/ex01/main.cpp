#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

	const int numAnimals = 4;
    Animal* animals[numAnimals];

    std::cout << "\n--- Creating Animals ---\n" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

	std::cout << "\n--- Testing makeSound ---\n" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->makeSound();
    }

	std::cout << "\n--- Deleting Animals ---\n" << std::endl;
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }
    
	std::cout << "\n--- Deep Copy Test ---\n" << std::endl;
    Cat original;
    original.getBrain()->setIdea(0, "Luffy");

	Cat copy = original;

    std::cout << "Original brain idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied brain idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;

	original.getBrain()->setIdea(0, "Mogiwara");

    std::cout << "After modifying original:" << std::endl;
    std::cout << "Original brain idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied brain idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;

    return 0;
}
