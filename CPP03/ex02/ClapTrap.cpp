#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called" << std::endl;

	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Assignment operator called" << std::endl;

    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    return (*this);
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Constructor taking called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->hitPoints == 0 || this->energyPoints == 0) {
		std::cout << this->name << " has no energy or hit points to attack." << std::endl;
		return;
	}

	this->energyPoints--;
	std::cout << "ClapTrap " << this->name 
		<< " attacks " <<  target 
		<< " causing " << this->attackDamage
		<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << this->name << " got attacked!!! " << amount << " hit point taken." << std::endl;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints <= 0) {
		std::cout << this->name << " has to energy points to repair." << std::endl;
		return;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << this->name << " has been repaired." << std::endl;
}

