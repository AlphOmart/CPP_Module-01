#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon*		_WeaponB;
public:
	HumanB(const std::string name);
	HumanB(const std::string name, Weapon WeaponB);
	void	setWeapon(Weapon& WeaponB);
	void	attack();
};