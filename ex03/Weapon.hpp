#pragma once
#include <iostream>

class Weapon
{
private:
	std::string _name;

public:
	Weapon() : _name(""){};
	Weapon(std::string name) : _name(name){};

	std::string getType ( void );
	void setType (std::string new_name);
};