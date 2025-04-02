#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

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
	protected:

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber();
		void  shortestSpan();
		void longestSpan();
};

#endif