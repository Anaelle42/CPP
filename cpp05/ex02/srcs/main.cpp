#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	try
	{
		srand(time(0));
		Bureaucrat didier("Didier", 45);
		Bureaucrat alex("Alex", 5);

		AForm *form = new PresidentialPardonForm("mael");
		// AForm *form = new RobotomyRequestForm("mael");
		// AForm *form = new ShrubberyCreationForm("mael");

		didier.signForm(*form);
		didier.executeForm(*form);
		
		alex.signForm(*form);
		alex.executeForm(*form);
		
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
