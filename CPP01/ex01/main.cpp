#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int N = 10;

	Zombie *Zzz = zombieHorde(N, "Gen01");
	for (int i = 0; i < N; i++)
	{
		Zzz[i].annouce();
	}
	delete[] Zzz;
}
