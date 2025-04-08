#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), _name("Default")
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "Default constructor Diamond Trap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "Constructor Diamond Trap called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	*this = other;
	std::cout << "Copy constructor Frag Trap called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHit();
		this->_energyPoints = other.getEnergy();
		this->_attackDamage = other.getAttack();
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor Diamond Trap called" << std::endl;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap name : " << this->getName() << std::endl;
	std::cout << "ClapTrap name : " << ClapTrap::getName() << std::endl;
}

std::string DiamondTrap::getName() const
{
	return this->_name;
}