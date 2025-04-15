#include "../includes/Span.hpp"

const char* SpanFullException::what() const throw()
{
	return ("Span is full");
}

const char* NoDistanceException::what() const throw()
{
	return ("No span can be found");
}

int main()
{
	try 
	{
		Span sp = Span(10006);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.addNumbers(10000);
		sp.addNumber(11);
		// sp.printSpan();


		sp.shortestSpan();
		sp.longestSpan();
		// sp.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}