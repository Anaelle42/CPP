#include "../includes/Animal.hpp"

Animal::Animal() : type("animal")
{
	std::cout << "Default constructor Animal called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "bzzzzz" << std::endl;
}