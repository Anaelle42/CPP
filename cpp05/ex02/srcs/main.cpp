#include "../includes/Bureaucrat.hpp"
#include <cstdlib>
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	try
	{
		srand(time(0));
		Bureaucrat didier("didier", 45);
		AForm *form = new PresidentialPardonForm("mael");
		didier.signForm(*form);
		didier.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
