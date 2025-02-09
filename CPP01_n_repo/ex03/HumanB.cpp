#include "HumanB.hpp"

HumanB::HumanB(std::string nameB) : name(nameB), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& weaponP) {
	weapon = &weaponP;
}

void HumanB::attack() const {
	if (!weapon)
		std::cout << name << " has no weapon!" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
