#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <limits.h>
#include <map>
#include <vector>
#include <list>

class SpanFullException : public std::exception
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
		std::vector<int> _span;
		int _sizeMax;
		int _i;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int n);
		void addNumbers(int n);
		void shortestSpan() const;
		void longestSpan() const;
		
		void printSpan() const;
};

#endif