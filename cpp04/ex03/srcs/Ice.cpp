#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& other) : AMateria (other._type)
{
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	Ice* materia = new Ice(*this);
	return (materia);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}