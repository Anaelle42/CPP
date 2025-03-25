#ifndef SHRUBBERYCREATIONFORM.HPP
# define SHRUBBERYCREATIONFORM.HPP

#include "AForm.hpp" // grade ??
#include <fstream>

class ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
};

#endif