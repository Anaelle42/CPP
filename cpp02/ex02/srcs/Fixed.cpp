#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	value = other.getRawBits();
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
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
	// std::cout << "Int constructor called" << std::endl;
	value = other << nbBits;
}

Fixed::Fixed(const float other)
{
	// std::cout << "Float constructor called" << std::endl;
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

Fixed Fixed::operator+(const Fixed& other) const
{
	return toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return toFloat() / other.toFloat();
}

bool Fixed::operator>(Fixed const& other) const
{
	return (toFloat() > other.toFloat());
}

bool Fixed::operator<(Fixed const& other) const
{
	return (toFloat() < other.toFloat());
}

bool Fixed::operator>=(Fixed const& other) const
{
	return (toFloat() >= other.toFloat());
}

bool Fixed::operator<=(Fixed const& other) const
{	
	return (toFloat() <= other.toFloat());
}

bool Fixed::operator==(Fixed const& other) const
{
	return (toFloat() == other.toFloat());
}

bool Fixed::operator!=(Fixed const& other) const
{
	return (toFloat() != other.toFloat());
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	value--;
	return (tmp);
}

Fixed Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed Fixed::min(Fixed& first, Fixed& second)
{
	if(first < second)
		return (first);
	else
		return (second);
}

Fixed const Fixed::min(Fixed const& first, Fixed const& second)
{
	if(first < second)
		return (first);
	else
		return (second);
}

Fixed Fixed::max(Fixed& first, Fixed& second)
{
	if(first > second)
		return (first);
	else
		return (second);
}

Fixed const Fixed::max(Fixed const& first, Fixed const& second)
{
	if(first > second)
		return (first);
	else
		return (second);
}
