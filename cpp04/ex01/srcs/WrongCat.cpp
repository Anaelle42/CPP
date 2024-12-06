#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : type("wrong Cat")
{
	std::cout << "Default constructor Wrong Cat called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor Wrong Cat called" << std::endl;
}

std::string WrongCat::getType() const
{
	return type;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}