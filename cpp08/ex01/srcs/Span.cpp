#include "../includes/Span.hpp"

Span::Span() : _sizeMax(10), _i(0)
{
}

Span::Span(unsigned int N) : _sizeMax(N), _i(0)
{
}

Span::~Span()
{
}

Span::Span(const Span& other) : _span(other._span), _sizeMax(other._sizeMax), _i(other._i)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_sizeMax = other._sizeMax;
		this->_i = other._i;
		this->_span = other._span;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_sizeMax < this->_i + 1)
		throw SpanFullException();
	this->_span.push_back(n);
	this->_i++;
}

void Span::insertRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_sizeMax < this->_i + end - begin)
		throw SpanFullException();
	this->_span.insert(_span.end(), begin, end);
	this->_i += end - begin;
}

void Span::shortestSpan() const
{
	if (_i < 2)
		throw NoDistanceException();

	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator j;
	std::vector<int>::const_iterator end = _span.end();			
	int distance = INT_MAX;

	for (i = _span.begin(); i != end; i++)
	{
		for (j = i + 1; j != end; j++)
		{
			if (*i > *j && *i - *j < distance)
				distance = *i - *j;
			else if (*i < *j && *j - *i < distance)
				distance = *j - *i;
		}
	}
	std::cout << "Shortest span = " << distance << std::endl;
}

void Span::longestSpan() const
{
	if (_i < 2)
		throw NoDistanceException();
	
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator j;
	std::vector<int>::const_iterator end = _span.end();
	int distance = INT_MIN;

	for (i = _span.begin(); i != end; i++)
	{
		for (j = i + 1; j != end; j++)
		{
			if (*i > *j && *i - *j > distance)
				distance = *i - *j;
			else if (*i < *j && *j - *i > distance)
				distance = *j - *i;
		}
	}
	std::cout << "Longest span = " << distance << std::endl;
}

void Span::printSpan() const
{
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator end = _span.end();
			
	for (i = _span.begin(); i != end; i++)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "Size = " << this->_span.size() << std::endl;
}