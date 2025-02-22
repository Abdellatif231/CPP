#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{
	randomChump("Z_0");
	Zombie *z = newZombie("Z_1");
	z->annouce();
	delete z;
}
