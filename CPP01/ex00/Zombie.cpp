#include "Zombie.hpp"

Zombie::Zombie(std::string o_name)
{
	name = o_name;
}

void Zombie::annouce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " is gone" << std::endl;
}
