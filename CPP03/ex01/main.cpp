#include "ScavTrap.hpp"

int main()
{
	ScavTrap cl("Ryuma");

	cl.attack("Kaido");
	cl.takeDamage(3);
	cl.beRepaired(10);
	cl.takeDamage(3);
	cl.guardGate();
}
