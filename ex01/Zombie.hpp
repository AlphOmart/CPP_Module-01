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

	void	setName(std::string new_name) {
		name = new_name;
	}

	std::string getName() const {
		return name;
	}

	void	announce ( void ){
		std::cout << getName() + ": BraiiiiiiinnnzzzZ" << std::endl;
	}
};