#include "Harl.hpp"

static int	valid_input(int argc);

int main(int argc, char **argv)
{
	Harl	hell;

	if (valid_input(argc))
		return(EXIT_FAILURE);
	hell.complain(argv[1]);
	return (EXIT_SUCCESS);
}

static int	valid_input(int argc)
{
	if (argc != 2)
	{
		std::cout << "\033[31mUsage :<./Harlf_filter> <level_name>\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}