#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->_type = ("Animal");
	std::cout << "Default constructor Animal called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	this->_type = other.getType();
	std::cout << "Copy constructor Animal called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	this->_type = other.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << "Grrr grr" << std::endl;
}
