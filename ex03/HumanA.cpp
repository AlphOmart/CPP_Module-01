#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& Weapon) :_name(name), _WeaponA(Weapon)
{};

void	HumanA::attack()
{
	std::cout << this->_name + " attacks with their " + this->_WeaponA.getType() << std::endl;
}