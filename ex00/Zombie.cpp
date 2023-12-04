#include "Zombie.hpp"
Zombie::Zombie(void): _name("")
{};
Zombie::Zombie(std::string name): _name(name)
{};
Zombie::~Zombie()
{
	std::cout << _name + " has been deleted" << std::endl;
};

std::string	Zombie::getName() const {
		return (this->_name);
}

void		Zombie::announce(void) const
{
	std::cout << getName() + ": BraiiiiiiinnnzzzZ" << std::endl;
}