#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class  Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();

	void		setName(std::string new_name);
	std::string	getName(void) const;
	void		announce (void) const;
};

#endif
