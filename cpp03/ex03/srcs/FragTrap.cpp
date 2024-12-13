#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default", 100, 100,30)
{
	std::cout << "Default constructor Frag Trap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "Constructor Frag Trap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHit());
	this->setEnergy(other.getEnergy());
	this->setAttack(other.getAttack());
	std::cout << "Copy constructor Frag Trap called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHit());
	this->setEnergy(other.getEnergy());
	this->setAttack(other.getAttack());
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Frag Trap called" << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "Frag Trap " << this->getName() << " is requesting a high five! ✋" << std::endl;
}
