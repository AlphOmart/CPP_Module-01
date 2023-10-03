#include "utils.hpp"

int	infile_open(std::ifstream&	original,const std::string& file_name)
{
	original.open(file_name);
	if (!original)
	{
		std::cerr << "\033[31mError : " + file_name
					<< " can't be open !\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	outfile_open(std::ofstream&	copy, const std::string& newfile_name)
{
	copy.open(newfile_name);
	if (!copy)
	{
		std::cerr << "\033[31mError : " + newfile_name
					<< " can't be create/open !\033[0m" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

void	change_string(std::ifstream& original, std::ofstream& copy,
					  const std::string& to_change, const std::string& substitute)
{
	std::string	line;
	std::string	new_line;
	while (std::getline(original, line))
	{
		new_line = "";
		size_t foundPos = line.find(to_change);
		if (foundPos != std::string::npos)
			new_line += line.substr(0, foundPos) + substitute +
						line.substr(foundPos + to_change.length());
		else
			new_line += line;
		copy << new_line << std::endl;
	}
}