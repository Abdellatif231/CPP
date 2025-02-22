#include "Weapon.hpp"

Weapon::Weapon(std::string givenType) : type(givenType) {}

const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setType(std::string newType) {
	type = newType;
}
