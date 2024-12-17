#include "../includes/Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	_brain = new Brain();
	std::cout << "Default constructor Dog called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->_type = other._type;
	*this->_brain = *other._brain;
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	this->_type = other._type;
	*this->_brain = *other._brain;
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destructor Dog called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf ouaf" << std::endl;
}