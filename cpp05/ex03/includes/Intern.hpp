#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();

		AForm* makeForm(std::string name, std::string target);
		AForm *robotomy(std::string target);
		AForm *shrubbery(std::string target);
		AForm *presidential(std::string target);

		class DoesntExistException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif