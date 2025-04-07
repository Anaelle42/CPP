#include "../includes/Span.hpp"

const char* FullException::what() const throw()
{
	return ("FullException");
}

const char* NoDistanceException::what() const throw()
{
	return ("NoDistanceException");
}

int main()
{
	try 
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.printSpan();
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}