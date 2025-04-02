#include "../includes/Span.hpp"

int main()
{
	try 
	{
		std::vector <int> tab;
		tab.push_back(0);  
		tab.push_back(10);  
		tab.push_back(6);  
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}