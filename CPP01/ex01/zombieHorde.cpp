#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombiez = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombiez[i].set_name(name);
	}
	return zombiez;
}
