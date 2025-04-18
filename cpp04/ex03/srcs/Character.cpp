#include "../includes/Character.hpp"

Character::Character() : _name("Jambon")
{
	for (int i(0); i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i(0); i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	this->_name = other.getName();
	for (int i(0); i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		for (int i(0); i < 4; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i(0); i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (int i(0); i < 4; i++)
	{
		if (_inventory[i] == m)
		{
			std::cerr << "Materia already equiped" << std::endl;
			return ;
		}
	}
	for (int i(0); i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cerr << "Can't equip, inventory full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cerr << "Invalid index" << std::endl;
}