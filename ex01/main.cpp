#include "Zombie.hpp"

Zombie* newZombie( std::string name);
void randomChump( std::string name);
Zombie*	zombieHorde(int N, std::string name);

int main(void)
{
	Zombie* alan = newZombie("Alan");
	alan->announce();
	Zombie* horde = zombieHorde(7, "Steven's horde");
	randomChump("Bob");
	for (int i = 0; i < 7; i++)
	{
		horde[i].announce();
	}
//	alan->~Zombie();
	delete[] horde;
	delete alan;
	return (0);
}