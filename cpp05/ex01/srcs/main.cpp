#include "../includes/Form.hpp"

int main()
{
	try
	{
		Bureaucrat didier("Didier", 10);
		std::cout << didier;

		Form fiche("resto", 20, 50);
		std::cout << fiche;

		didier.signForm(fiche);
		//didier.signForm(fiche);

		//std::cout << fiche;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
