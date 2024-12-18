#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& other) : AMateria (other._type)
{
}

Ice& Ice::operator=(const Ice& other)
{
	this->_type = other.getType();
	return (*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	Ice* ice = new Ice(*this);
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}