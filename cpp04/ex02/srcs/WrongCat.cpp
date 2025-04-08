#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	setType("Wrong Cat");
	std::cout << "Default constructor Wrong Cat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	this->_type = other.getType();
	std::cout << "Copy constructor Wrong Cat called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor Wrong Cat called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}