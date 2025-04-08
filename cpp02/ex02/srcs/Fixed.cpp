#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_value = other.getRawBits();
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed::Fixed(const int other)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = other << this->_nbBits;
}

Fixed::Fixed(const float other)
{
	// std::cout << "Float constructor called" << std::endl;
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
	return (os);
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

const Fixed Fixed::min(Fixed const& first, Fixed const& second)
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

const Fixed Fixed::max(Fixed const& first, Fixed const& second)
{
	if (first > second)
		return (first);
	else
		return (second);
}
