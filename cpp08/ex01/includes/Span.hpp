#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

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
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int n);
		void insertRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan() const;
		int longestSpan() const;
		
		void printSpan() const;
};

#endif