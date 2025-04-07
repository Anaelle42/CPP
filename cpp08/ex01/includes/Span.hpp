#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <map>
#include <vector>
#include <list>

class FullException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

class NoDistanceException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

class Span
{
	private:
		int _max;
		std::vector<int> _span;
		int _nb;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int n);
		void shortestSpan();
		void longestSpan();
		
		void printSpan();
};

#endif