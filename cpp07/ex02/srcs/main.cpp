#include "../includes/Array.hpp"

int main()
{
	try
	{
		Array <int> tabA;
		Array <int> tabB(5);
		for (int i = 0; i < tabB.size(); i++)
			tabB[i] = i;
		Array <int> tabC(tabB);

		std::cout << "size A: " << tabA.size() << std::endl;
		std::cout << "size B: " << tabB.size() << std::endl;
		std::cout << "size C: " << tabC.size() << std::endl;
		
		for (int i = 0; i < tabC.size() + 5; i++)
			std::cout << tabC[i] << " ";

		Array <std::string> tabD;
		Array <std::string> tabE(4);

		for (int i = 0; i < tabE.size(); i++)
			tabE[i] = "hello";
		for (int i = 0; i < tabE.size(); i++)
			std::cout << tabE[i] << " ";
		
		std::cout << std::endl << tabE[5] << std::endl;

		int* a = new int();
		std::cout << *a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
