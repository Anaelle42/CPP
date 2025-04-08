#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i(0); i < 4; i++)
		_learn[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i(0); i < 4; i++)
	{
		if (other._learn[i])
			_learn[i] = other._learn[i]->clone();
		else
			_learn[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i(0); i < 4; i++)
		{
			if (_learn[i])
			{
				delete _learn[i];
				_learn[i] = NULL;
			}
			if (other._learn[i])
				_learn[i] = other._learn[i]->clone();
			else
				_learn[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i(0); i < 4; i++)
	{
		if (_learn[i])
			delete _learn[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i(0); i < 4; i++)
	{
		if (_learn[i] == NULL)
		{
			_learn[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i(0); i < 4; i++)
	{
		if (_learn[i]->getType() == type)
			return (_learn[i]->clone());
	}
	return 0;
}
