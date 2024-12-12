#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	this->_value = other.getRawBits();
}

Fixed::~Fixed()
{
}

void Fixed::operator=(const Fixed& other)
{
	this->_value = other.getRawBits();
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed::Fixed(const int other)
{
	this->_value = other << this->_nbBits;
}

Fixed::Fixed(const float other)
{
	this->_value = roundf(other * (1 << this->_nbBits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_nbBits));
}

int Fixed::toInt(void) const
{
	return 	(this->_value >> this->_nbBits);
}

std::ostream &operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}

bool Fixed::operator>(Fixed const& other) const
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(Fixed const& other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(Fixed const& other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(Fixed const& other) const
{	
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(Fixed const& other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(Fixed const& other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_value--;
	return (tmp);
}

Fixed Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return (first);
	else
		return (second);
}

Fixed const Fixed::min(Fixed const& first, Fixed const& second)
{
	if (first < second)
		return (first);
	else
		return (second);
}

Fixed Fixed::max(Fixed& first, Fixed& second)
{
	if (first > second)
		return (first);
	else
		return (second);
}

Fixed const Fixed::max(Fixed const& first, Fixed const& second)
{
	if (first > second)
		return (first);
	else
		return (second);
}
