#include "Zombie.hpp"

Zombie* newZombie( std::string name);
void randomChump( std::string name);

int main(void)
{
	Zombie *alan = newZombie("Alan");
	alan->announce();
	randomChump("Bob");
//	alan->~Zombie();
	delete alan;
	return (0);
}