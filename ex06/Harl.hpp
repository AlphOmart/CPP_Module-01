#include <iostream>

class Harl
{
private:
	static const char* _level[];
	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
	int 	_getlevel(std::string& level);

public:
	Harl(){};
	~Harl(){};
	void	complain(std::string level);

};