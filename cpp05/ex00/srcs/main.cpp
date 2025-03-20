#include "../includes/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat didier("Didier", 150);
		std::cout << "Name : " << didier.getName() << std::endl;
		std::cout << "Grade : " << didier.getGrade() << std::endl;

		didier.incrementGrade();
		std::cout << "Grade : " << didier.getGrade() << std::endl;

		didier.decrementGrade();
		std::cout << "Grade : " << didier.getGrade() << std::endl;
		
		std::cout << didier;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
