#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong animal")
{
	std::cout << "Default constructor Wrong Animal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor Wrong Animal called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "bzzzzz" << std::endl;
}