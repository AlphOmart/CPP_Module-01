#include "Zombie.hpp"

Zombie* newZombie( std::string name);
void randomChump( std::string name);

int main(void)
{
	Zombie *Alan = newZombie("Alan");
	Zombie *Zedd = newZombie("");
	Zombie Hall = Zombie("");

	Hall.announce();
	Zedd->announce();
	Alan->announce();
	randomChump("Bob");
	delete Alan;
	delete Zedd;
	return (0);
}