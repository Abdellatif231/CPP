#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "\n--- Correct Polymorphism ---\n" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    dog->makeSound();
    cat->makeSound();
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n--- Wrong Polymorphism ---\n" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
