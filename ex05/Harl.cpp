#include "Harl.hpp"
#include <map>

#define DEBUG "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define INFO "I cannont belive adding extra bacon costs more money. \
You didn't put enough bacon in my burger ! If you did, I wouldn't asking for more !"
#define WARNING "I think I deserve to have some extra bacon for free.\
I've been coming for years whereas you started working here since last month."
#define ERROR "This is unacceptable! I want to speak to the manager now."

void	Harl::debug( void )
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info( void )
{
	std::cout << INFO << std::endl;
}

void	Harl::warning( void )
{
	std::cout << WARNING << std::endl;
}

void	Harl::error( void )
{
	std::cout << ERROR << std::endl;
}

typedef void (Harl::*allcmd)();

void	Harl::complain( std::string level )
{
	std::map<std::string, allcmd> command;

	command["debug"] = &Harl::debug;
	command["info"] = &Harl::info;
	command["warning"] = &Harl::warning;
	command["error"] = &Harl::error;
	if (command.find(level) != command.end())
		(this->*command[level])();
	else
		std::cout << "no complain" << std::endl;
}