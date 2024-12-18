#include "../includes/Character.hpp"

Character::Character(std::string name) : _name(name)
{
}

Character::~Character()
{
}

std::string const & getName() const
{
	return this->_name;
}

void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);