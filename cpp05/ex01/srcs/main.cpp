#include "../includes/Form.hpp"

int main()
{
	try
	{
		Form fiche("resto", 20, 50);
		std::cout << fiche;

		//fiche.decrementGrade();
		//std::cout << fiche;
	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
