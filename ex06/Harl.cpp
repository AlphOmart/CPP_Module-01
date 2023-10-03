#include "Harl.hpp"

# define DEBUG "\033[34m[ DEBUG ]\n\
\033[0mI love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define INFO "\033[32m[ INFO ]\n\
\033[0mI cannont belive adding extra bacon costs more money. \
You didn't put enough bacon in my burger ! If you did, I wouldn't asking for more !"
#define WARNING "\033[33m[ WARNING ]\n\
\033[0mI think I deserve to have some extra bacon for free.\
I've been coming for years whereas you started working here since last month."
#define ERROR "\033[31m[ ERROR ]\n\
\033[0mThis is unacceptable! I want to speak to the manager now."
# define INVALID_LVL "\033[31m[ INVALID LEVEL ]\nNext time chose a valid lvl!\033[0m"

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