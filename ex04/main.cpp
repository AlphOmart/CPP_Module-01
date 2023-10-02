#include "iostream"
#include "fstream"

static int	valid_input(int argc);
static int infile_open(std::ifstream&	original, const std::string& file_name);
static int outfile_open(std::ofstream&	copy, const std::string& newfile_name);

int main(int argc, char **argv)
{
	if (valid_input(argc))
		return (EXIT_FAILURE);

	const std::string	file_name(argv[1]);
	const std::string	newfile_name(file_name + ".replace");
	const std::string	to_change(argv[2]);
	const std::string	substitute(argv[3]);

	std::ifstream	original;
	if (infile_open(original, file_name))
		return (EXIT_FAILURE);
	std::ofstream 	copy;
	if (outfile_open(copy, newfile_name))
		return (EXIT_FAILURE);

	std::string	line;
	std::string	new_line;
	while (std::getline(original, line))
	{
		new_line = "";
		size_t foundPos = line.find(to_change);
		if (foundPos != std::string::npos)
		{
			new_line += line.substr(0, foundPos) + substitute + line.substr(foundPos + to_change.length());
			std::cout << new_line << std::endl;
		}
		else
			new_line += line;
		copy << new_line << std::endl;
	}
	original.close();
	copy.close();
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

static int	infile_open(std::ifstream&	original,const std::string& file_name)
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

static int	outfile_open(std::ofstream&	copy, const std::string& newfile_name)
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