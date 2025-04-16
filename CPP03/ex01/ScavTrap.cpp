#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;

    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap Assignment operator called" << std::endl;

    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    return (*this);
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (hitPoints == 0 || energyPoints == 0) {
        std::cout << name << " has no energy or hit points to attack." << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " ferociously attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}
