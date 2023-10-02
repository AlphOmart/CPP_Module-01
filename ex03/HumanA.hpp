#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_WeaponA;
public:
	HumanA(const std::string& name, Weapon& Weapon) :_name(name), _WeaponA(Weapon){};
	void	attack();
};