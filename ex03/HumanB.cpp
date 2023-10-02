#include "HumanB.hpp"

void HumanB::setWeapon(Weapon WeaponB)
{
	this->_WeaponB = WeaponB;
}

void	HumanB::attack()
{
	std::cout << this->_name + " attacks with their " + this->_WeaponB.getType() << std::endl;
}