#include "HumanB.hpp"

HumanB::HumanB(const std::string name, Weapon WeaponB)
{
	_name = name;
	_WeaponB = &WeaponB;
}

HumanB::HumanB(const std::string name)
{
	_name = name;
	_WeaponB = NULL;
}

void HumanB::setWeapon(Weapon& WeaponB)
{
	this->_WeaponB = &WeaponB;
}

void	HumanB::attack()
{
	if (this->_WeaponB != NULL)
		std::cout << this->_name + " attacks with their " + this->_WeaponB->getType() << std::endl;
	else
		std::cout << this->_name + " has no weapons" << std::endl;
}