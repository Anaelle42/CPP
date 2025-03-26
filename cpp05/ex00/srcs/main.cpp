#include "../includes/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat didier("Didier", 150);
		std::cout << didier;

		didier.incrementGrade();
		std::cout << didier;

		didier.decrementGrade();
		std::cout << didier;
	
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}