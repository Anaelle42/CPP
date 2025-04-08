#include "../includes/Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	std::cout << "Default constructor Dog called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->_type = other.getType();
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf ouaf" << std::endl;
}