#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

AForm* Intern::robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

const char* Intern::DoesntExistException::what() const throw()
{
	return ("The provided form name does not exist");
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	std::string tab[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm* (Intern::*ftab[])(std::string) = {&Intern::robotomy, &Intern::shrubbery, &Intern::presidential};
	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(tab[i]))
		{
			AForm *form = (this->*ftab[i])(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);	
		}
	}
	throw Intern::DoesntExistException();
}
