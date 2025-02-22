#include "HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon& weaponName) : name(nameA), weapon(weaponName) {}

void HumanA::attack() const {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
