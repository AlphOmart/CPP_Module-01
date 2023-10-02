#ifndef INCLUDE_HPP
# define INCLUDE_HPP

# include "iostream"
# include "fstream"

# define INVALID_INPUT "\033[31mUsage : ./<exec> <filename> <string1> <string2>\033[0m"

int		infile_open(std::ifstream&	original,const std::string& file_name);
int		outfile_open(std::ofstream&	copy, const std::string& newfile_name);
void	change_string(std::ifstream& original, std::ofstream& copy,
					  const std::string& to_change, const std::string& substitute);
#endif