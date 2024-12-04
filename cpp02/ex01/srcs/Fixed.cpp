#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	value = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = other.getRawBits();
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed::Fixed(const int other)
{
	std::cout << "Int constructor called" << std::endl;
	value = other << nbBits;
}

Fixed::Fixed(const float other)
{
	std::cout << "Float constructor called" << std::endl;
	value = other * (1 << nbBits);
}

float Fixed::toFloat( void ) const
{
	return (float)value / (1 << nbBits);
}

int Fixed::toInt( void ) const
{
	return 	value >> nbBits;
}

std::ostream &operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}