#include <iostream>

class  Zombie
{
private:
	std::string name;
public:
	Zombie() : name("") {};
	Zombie(std::string name) : name(name) {};
	~Zombie() {
		std::cout << name + " has been deleted" << std::endl;
	};

	std::string getName() const {
		return name;
	}

	void	announce ( void ){
		std::cout << getName() + ": BraiiiiiiinnnzzzZ" << std::endl;
	}
};