#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default constructor Scav Trap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor Scav Trap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Scav Trap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHit());
	this->setEnergy(other.getEnergy());
	this->setAttack(other.getAttack());
	std::cout << "Copy constructor Scav Trap called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHitPoints(other.getHit());
		this->setEnergy(other.getEnergy());
		this->setAttack(other.getAttack());
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getHit() > 0)
	{
		if (this->getEnergy() > 0)
		{
			this->setEnergy(this->getEnergy() - 1);
			std::cout << "ScavTrap " << this->getName() << " attacks " << target;
			std::cout << ", causing " << this->getAttack() << " points of damage!" << std::endl;
			std::cout << "Energy points : " << this->getEnergy() << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->getName() << "has no energie left..." << std::endl;
	}
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode!" << std::endl;
}
