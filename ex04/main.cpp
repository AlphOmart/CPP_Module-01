#include "iostream"
#include "fstream"

static int origin_fopen(std::ifstream&	original, std::string file_name);
static int copy_fopen(std::ofstream&	copy, std::string newfile_name);

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "\033[31mUsage : ./<exec> <filename> <string1> <string2>\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}

	const std::string		file_name(argv[1]);
	const std::string		newfile_name(file_name + ".replace");
	std::ifstream	original(file_name);
	std::ofstream 	copy(newfile_name);

	if (origin_fopen(original, file_name))
		return (EXIT_FAILURE);
	if (copy_fopen(copy, newfile_name))
		return (EXIT_FAILURE);
	std::cout << "tout est ok !" << std::endl;
	return (0);
}

static int origin_fopen(std::ifstream&	original, std::string file_name)
{
	original.open(file_name);
	if (!original)
	{
		std::cerr << "\033[31mError : " + file_name + " can't be open !\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}
	std::cout << file_name + " est ouvert" << std::endl;
	return (EXIT_SUCCESS);
}

static int copy_fopen(std::ofstream&	copy, std::string newfile_name)
{
	copy.open(newfile_name);
	if (!copy)
	{
		std::cerr << "\033[31mError : " + newfile_name + " can't be create/open !\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}
	std::cout << newfile_name + " est ouvert" << std::endl;
	return (EXIT_SUCCESS);
}