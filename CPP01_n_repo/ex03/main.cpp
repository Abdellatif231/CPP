#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		Weapon club("Two Swords");
		HumanA odden("Odden", club);
		odden.attack();
		club.setType("One Sword");
		odden.attack();
	}
	{
		Weapon club("Sword");
		HumanB roger("Roger");
		roger.attack();
		roger.setWeapon(club);
		roger.attack();
		club.setType("Haki");
		roger.attack();
	}
	return 0;
}
