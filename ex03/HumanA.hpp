#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_WeaponA;
public:
	HumanA(const std::string& name, Weapon& Weapon);
	void	attack();
};

#endif