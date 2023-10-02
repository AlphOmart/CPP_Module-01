#include "iostream"
#include "fstream"

static int	valid_input(int argc);
static int origin_fopen(std::ifstream&	original, std::string file_name);
static int copy_fopen(std::ofstream&	copy, std::string newfile_name);

int main(int argc, char **argv)
{
	if (valid_input(argc))
		return (EXIT_FAILURE);

	const std::string	file_name(argv[1]);
	const std::string	newfile_name(file_name + ".replace");
	const std::string	to_change;
	const std::string	substitute;

	std::ifstream	original;
	if (origin_fopen(original, file_name)) {
		return (EXIT_FAILURE);
	}
	std::ofstream 	copy;
	if (copy_fopen(copy, newfile_name))
		return (EXIT_FAILURE);
	return (0);
}

static int	valid_input(int argc)
{
	if (argc != 4)
	{
		std::cerr << "\033[31mUsage : ./<exec> <filename> <string1> <string2>\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

static int	origin_fopen(std::ifstream&	original, std::string file_name)
{
	original.open(file_name);
	if (!original)
	{
		std::cerr << "\033[31mError : " + file_name + " can't be open !\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}
	std::cout << file_name + " is open" << std::endl;
	return (EXIT_SUCCESS);
}

static int	copy_fopen(std::ofstream&	copy, std::string newfile_name)
{
	copy.open(newfile_name);
	if (!copy)
	{
		std::cerr << "\033[31mError : " + newfile_name + " can't be create/open !\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}
	std::cout << newfile_name + " is open" << std::endl;
	return (EXIT_SUCCESS);
}