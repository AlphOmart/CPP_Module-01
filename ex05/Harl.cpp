#include "Harl.hpp"
#include <map>

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

typedef void (Harl::*allcmd)();

void	Harl::complain( std::string level )
{
	std::map<std::string, allcmd> command;

	command["DEBUG"] = &Harl::_debug;
	command["INFO"] = &Harl::_info;
	command["WARNING"] = &Harl::_warning;
	command["ERROR"] = &Harl::_error;
	if (command.find(level) != command.end())
		(this->*command[level])();
	else
		std::cout << "no complain" << std::endl;
}