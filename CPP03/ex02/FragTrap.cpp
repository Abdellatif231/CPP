#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap Copy constructor called" << std::endl;

    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap Assignment operator called" << std::endl;

    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    return (*this);
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints == 0 || energyPoints == 0) {
        std::cout << name << " has no energy or hit points to attack." << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " ferociously attacks " << target << " causing "
 << attackDamage << " points of damage!" << std::endl;
}

void FragTrap:: highFivesGuys() {
    std::cout << "FragTrap " << name << " high five." << std::endl;
}

