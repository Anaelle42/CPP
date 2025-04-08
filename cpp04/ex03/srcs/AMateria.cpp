#include "../includes/AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria& other)
{
	this->_type = other._type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::setType(std::string const type)
{
	this->_type = type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}