#include <iostream>

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

class Harl
{
private:
	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );

public:
	Harl(){};
	~Harl(){};
	void	complain( std::string level );
};