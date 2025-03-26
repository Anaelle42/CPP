#include "../includes/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat didier("Didier", 150);
		std::cout << "Name : " << didier.getName() << std::endl;
		std::cout << "Grade : " << didier.getGrade() << std::endl;

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
