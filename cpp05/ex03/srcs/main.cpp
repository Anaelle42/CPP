#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main()
{
	try
	{
		srand(time(0));
		
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		//rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		//rrf = someRandomIntern.makeForm("presidential pardon", "Bender");

		Bureaucrat didier("didier", 4);
		didier.signForm(*rrf);
		didier.executeForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
