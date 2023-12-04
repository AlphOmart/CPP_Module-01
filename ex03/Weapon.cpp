#include "Weapon.hpp"

Weapon::Weapon() : _type("")
{};
Weapon::Weapon(std::string name) : _type(name)
{};
Weapon::~Weapon()
{}

void		Weapon::setType (std::string new_type) {
	this->_type = new_type;
}

std::string	Weapon::getType ( void ) {
	return (this->_type);
}