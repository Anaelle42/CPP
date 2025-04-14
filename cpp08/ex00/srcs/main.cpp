#include "../includes/Easyfind.hpp"

const char* NotFindException::what() const throw()
{
	return ("Occurence not find");
}

int main()
{
	try 
	{
		std::vector <int> tab;
		tab.push_back(0);  
		tab.push_back(10);  
		tab.push_back(6);
		tab.push_back(10);  
		easyfind(tab, 10);
		easyfind(tab, 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}