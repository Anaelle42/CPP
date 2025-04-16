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
		Span sp = Span(10005);
		sp.addNumber(6);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(3);
		sp.addNumber(11);

		std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span = " << sp.longestSpan() << std::endl;

		std::vector<int> other;
		for (int i = 0; i < 10000; i++)
			other.push_back(i);
		sp.insertRange(other.begin(), other.end());

		std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span = " << sp.longestSpan() << std::endl;
		sp.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}