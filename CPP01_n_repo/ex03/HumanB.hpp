#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon* weapon;

	public:
		HumanB(std::string nameB);
		void setWeapon(Weapon& weaponP);
		void attack() const;
};

#endif
