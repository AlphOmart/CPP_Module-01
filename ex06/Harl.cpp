#include "Harl.hpp"

Harl::Harl() {};
Harl::~Harl(){};

const char*	Harl::_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

void	Harl::_debug(void)
{
	std::cout << DEBUG << std::endl;
	this->_info();
}

void	Harl::_info(void)
{
	std::cout << INFO << std::endl;
	this->_warning();
}

void	Harl::_warning(void)
{
	std::cout << WARNING << std::endl;
	this->_error();
}

void	Harl::_error(void)
{
	std::cout << ERROR << std::endl;
}

int		Harl::_getlevel(std::string& level)
{
	for (int i = 0; i < 4; i++)
		if (level == _level[i])
			return (i);
	return (5);
}

void	Harl::complain(std::string level)
{
	switch (Harl::_getlevel(level))
	{
		case 0:
			this->_debug();
			break;
		case 1:
			this->_info();
			break;
		case 2:
			this->_warning();
			break;
		case 3:
			this->_error();
			break;
		default:
			std::cout << INVALID_LVL << std::endl;
	}
}