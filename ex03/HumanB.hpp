#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon		_WeaponB;
public:
	HumanB(const std::string name): _name(name), _WeaponB(""){};
	HumanB(const std::string name, Weapon WeaponB): _name(name), _WeaponB(WeaponB){};
	void	setWeapon(Weapon WeaponB);
	void	attack();
};