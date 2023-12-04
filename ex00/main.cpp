#include "Zombie.hpp"

Zombie* newZombie( std::string name);
void randomChump( std::string name);

int main(void)
{
	Zombie *alan = newZombie("Alan");
	Zombie *Zedd = newZombie("");
	Zombie Hall = Zombie("");

	Hall.announce();
	Zedd->announce();
	alan->announce();
	randomChump("Bob");
	delete alan;
	return (0);
}