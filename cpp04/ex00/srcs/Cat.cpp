#include "../includes/Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	std::cout << "Default constructor Cat called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->_type = other.getType();
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	this->_type = other.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}