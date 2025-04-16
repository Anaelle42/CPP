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
		Span sp = Span(1005);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(10);
		sp.addNumber(11);

		std::vector<int> other;
		for (int i = 0; i < 1000; i++)
			other.push_back(i);
		sp.insertRange(other.begin(), other.end());

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