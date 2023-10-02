#include <iostream>

int main()
{
	std::string message = "HI THIS IS BRAIN";
	std::string* stringPTR = &message;
	std::string& stringREF = message;


	std::cout << "The address of the memory string :" << &message << std::endl
			<< "The address stored in the stringPTR :" << stringPTR << std::endl
			<< "The address stored in the stringREF :" << &stringREF << std::endl
			<< std::endl
			<< "The value of the string :" << message << std::endl
			<< "The value pointed to by stringPTR :" << *stringPTR << std::endl
			<< "The value pointed to by stringPTR :" << stringREF << std::endl;
}