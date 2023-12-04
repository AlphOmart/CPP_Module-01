#include "utils.hpp"

static int	valid_input(int argc);

int main(int argc, char **argv)
{
	if (valid_input(argc))
		return (EXIT_FAILURE);

	const std::string	file_name(argv[1]);
	const std::string	newfileName(file_name + ".replace");
	const std::string	to_change(argv[2]);
	const std::string	substitute(argv[3]);

	std::ifstream	original;
	if (infile_open(original, file_name))
		return (EXIT_FAILURE);
	std::ofstream 	copy;
	if (outfile_open(copy, newfileName))
		return (EXIT_FAILURE);
	change_string(original, copy, to_change, substitute);
	original.close();
	copy.close();
	return (EXIT_SUCCESS);
}

static int	valid_input(int argc)
{
	if (argc != 4)
	{
		std::cerr << INVALID_INPUT << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
