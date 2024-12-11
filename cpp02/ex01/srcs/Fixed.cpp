#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = other.getRawBits();
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed::Fixed(const int other)
{
	std::cout << "Int constructor called" << std::endl;
	_value = other << _nbBits;
}

Fixed::Fixed(const float other)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(other * (1 << _nbBits));
}

float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _nbBits);
}

int Fixed::toInt(void) const
{
	return 	_value >> _nbBits;
}

std::ostream &operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}