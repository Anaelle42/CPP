#include "../includes/Span.hpp"

Span::Span() : _sizeMax(10)
{
}

Span::Span(unsigned int n) : _sizeMax(n)
{
}

Span::~Span()
{
}

Span::Span(const Span& other) : _span(other._span), _sizeMax(other._sizeMax)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_sizeMax = other._sizeMax;
		this->_span = other._span;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_sizeMax < this->_span.size() + 1)
		throw SpanFullException();
	this->_span.push_back(n);
}

void Span::insertRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_sizeMax < this->_span.size() + end - begin)
		throw SpanFullException();
	this->_span.insert(this->_span.end(), begin, end);
}

int Span::shortestSpan() const
{
	if (this->_span.size() < 2)
		throw NoDistanceException();

	std::vector<int> sorted = this->_span;
	sort(sorted.begin(), sorted.end());

	int min = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); ++i)
	{
		if (sorted[i] - sorted[i - 1] < min)
			min = sorted[i] - sorted[i - 1];
	}
	return min;
}

int Span::longestSpan() const
{
	if (this->_span.size() < 2)
		throw NoDistanceException();
	
	int min = *min_element(this->_span.begin(), this->_span.end());
	int max = *max_element(this->_span.begin(), this->_span.end());

	return max - min;
}

void Span::printSpan() const
{
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator end = this->_span.end();
			
	for (i = this->_span.begin(); i != end; i++)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "Size = " << this->_span.size() << std::endl;
}