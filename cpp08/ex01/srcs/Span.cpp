#include "../includes/Span.hpp"

Span::Span() : _max(10)
{
}

Span::Span(unsigned int N) : _max(N)
{
}

Span::~Span()
{
}

Span::Span(const Span& other) : _max(other._max)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
		this->_max = other._max;
	return (*this);
}

void Span::addNumber()
{
}