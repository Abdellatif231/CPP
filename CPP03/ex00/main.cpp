#include "ClapTrap.hpp"

int main()
{
	ClapTrap cl("Ryuma");

	cl.attack("Kaido");
	cl.takeDamage(3);
	cl.beRepaired(10);
}
