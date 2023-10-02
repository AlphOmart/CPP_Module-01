#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon bat = Weapon("Bat");
		Weapon	club = Weapon("crude spiked club");

		HumanB	Elise("Elise", bat);
		Elise.attack();
		Elise.setWeapon(club);
		Elise.attack();
		club.setType("some other type of club");
		Elise.attack();

	}
	return (0);
}