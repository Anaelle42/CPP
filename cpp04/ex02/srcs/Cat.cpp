#include "../includes/Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	this->_brain = new Brain();
	std::cout << "Default constructor Cat called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->_type = other.getType();
	this->_brain = new Brain(*other._brain);
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->_type = other.getType();
		*this->_brain = *other._brain;
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}