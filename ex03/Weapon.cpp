#include "Weapon.hpp"


void Weapon::setType (std::string new_name) {
	this->_name = new_name;
}

std::string Weapon::getType ( void ) {
	return (this->_name);
}