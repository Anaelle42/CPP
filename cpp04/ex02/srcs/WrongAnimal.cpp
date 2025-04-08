#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = ("Wrong Animal");
	std::cout << "Default constructor Wrong Animal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->_type = other.getType();
	std::cout << "Copy constructor Wrong Animal called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor Wrong Animal called" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Grrr grr" << std::endl;
}