#include "iostream"
#include "fstream"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 4)
	{
		std::cout << "\033[31mUsage : ./<exec> <filename> <string1> <string2>\033[0m" << std::endl;
		return (0);
	}
	std::ifstream original(argv[1]);
	if (original.is_open())
	{
		std::cout << argv[1] << " as bien été ouvert" << std::endl;
	}
	else
	{
		std::cout << argv[1] << " n'est pas ouvert" << std::endl;
		return (0);
	}
	return (0);
}