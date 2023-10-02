#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->_name + " attacks with their " + this->_WeaponA.getType() << std::endl;
}