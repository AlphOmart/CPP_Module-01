#include "Harl.hpp"
#include <map>

Harl::Harl(void){};
Harl::~Harl(void){};

void	Harl::_debug( void )
{
	std::cout << DEBUG << std::endl;
}

void	Harl::_info( void )
{
	std::cout << INFO << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << WARNING << std::endl;
}

void	Harl::_error( void )
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string comp_list[4] = {"DEBUG", "INFO", "WARNING","ERROR"};
	void (Harl::*complain[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};


	for (int i = 0; i < 4; i++)
	{
		if (comp_list[i] == level)
		{
			(this->*complain[i])();
			return ;
		}
	}
		std::cout << "no complain" << std::endl;
}