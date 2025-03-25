#include "../includes/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat didier("Didier", 10);
		std::cout << didier;

		// Form fiche("fiche", 20, 50);
		// std::cout << fiche;

		// didier.signForm(fiche);
		// didier.signForm(fiche);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
