#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& other) : AMateria (other._type)
{
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	Cure* materia = new Cure(*this);
	return (materia);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}