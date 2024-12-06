#include "../includes/Dog.hpp"

Dog::Dog() : type("Dog")
{
	std::cout << "Default constructor Dog called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

std::string Dog::getType() const
{
	return type;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf ouaf" << std::endl;
}