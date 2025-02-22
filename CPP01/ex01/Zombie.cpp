#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::annouce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string o_name) {
	name = o_name;
}

Zombie::~Zombie() {
	std::cout << name << " is gone" << std::endl;
}
