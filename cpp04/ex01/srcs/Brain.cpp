#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor Brain called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i(0); i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "Copy constructor Brain called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i(0); i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}
