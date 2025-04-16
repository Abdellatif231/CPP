#include "ClapTrap.hpp"

int main()
{
	ClapTrap cl("Ryuma");

	cl.attack("Kaido");
	cl.takeDamage(3);
	cl.takeDamage(3);
	cl.takeDamage(3);
	cl.takeDamage(3);
	cl.attack("mok");
	cl.beRepaired(10);
	cl.takeDamage(3);
}
