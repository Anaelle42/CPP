#include "../includes/Span.hpp"

Span::Span() : _max(10), _nb(0)
{
}

Span::Span(unsigned int N) : _max(N), _nb(0)
{
}

Span::~Span()
{
}

Span::Span(const Span& other) : _max(other._max) //
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
		this->_max = other._max;
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_max < this->_nb + 1)
		throw FullException();
	this->_span.push_back(n);
	this->_nb++;
}

void Span::shortestSpan()
{
	std::vector<int>::const_iterator i = _span.begin();
	std::vector<int>::const_iterator end = _span.end();
			
	int distance;
	if (*i > *(i + 1))
		distance = *i - *(i + 1);
	else
		distance = *(i + 1) - *i ;

	for (i = _span.begin(); i != end; i++)
	{
		if (*(i+1))
		{
			std::cout << *i << " " << *(i + 1) << std::endl;
			if (*i > *(i + 1) && (*i - *(i + 1) < distance))
			{
				//std::cout << *i - *(i + 1) << std::endl;
				distance = *i - *(i + 1);
			}
			else if (*i < *(i + 1) && (*(i + 1) - *i < distance))
			{
				//std::cout << *(i + 1) - *i << std::endl;
				distance = *(i + 1) - *i ;
			}
		}
	}
	std::cout << "distance la plus courte: " << distance << std::endl;
}

void Span::longestSpan()
{
	std::vector<int>::const_iterator i = _span.begin();
	std::vector<int>::const_iterator end = _span.end();
			
	int distance;
	if (*i > *(i + 1))
		distance = *i - *(i + 1);
	else
		distance = *(i + 1) - *i ;

	for (i = _span.begin(); i != end; i++)
	{
		if (*(i+1))
		{
			std::cout << *i << " " << *(i + 1) << std::endl;
			if (*i > *(i + 1) && (*i - *(i + 1) > distance))
			{
				//std::cout << *i - *(i + 1) << std::endl;
				distance = *i - *(i + 1);
			}
			else if (*i < *(i + 1) && (*(i + 1) - *i > distance))
			{
				//std::cout << *(i + 1) - *i << std::endl;
				distance = *(i + 1) - *i ;
			}
		}
	}
	std::cout << "distance la plus longue: " << distance << std::endl;
}



void Span::printSpan()
{
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator end = _span.end();
			
	for (i = _span.begin(); i != end; i++)
	{
		std::cout << *i << std::endl;
	}
}