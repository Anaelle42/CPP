#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& other) : AMateria (other._type)
{
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	Cure* cure = new Cure(*this);
	return (cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}