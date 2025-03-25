#ifndef PRESIDENTIALPARDONFORM.HPP
# define PRESIDENTIALPARDONFORM.HPP

#include <iostream>

class PresidentialPardonForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();
};

#endif