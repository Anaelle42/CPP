#include "../includes/Cat.hpp"

Cat::Cat() : type("Cat")
{
	std::cout << "Default constructor Cat called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

std::string Cat::getType() const
{
	return type;
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}