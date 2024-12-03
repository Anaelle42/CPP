#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	valeur = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	valeur = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	valeur = other.getRawBits();
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return valeur;
}

void Fixed::setRawBits( int const raw )
{
	valeur = raw;
}

Fixed::Fixed(const int other)
{
	std::cout << "Int constructor called" << std::endl;
	valeur = other << nbbits;
}

Fixed::Fixed(const float other)
{
	std::cout << "Float constructor called" << std::endl;
	valeur = other * (1 << nbbits);
}

float Fixed::toFloat( void ) const
{
	return (float)valeur / (1 << nbbits);
}

int Fixed::toInt( void ) const
{
	return 	valeur >> nbbits;
}

std::ostream &operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}