#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor Clap Trap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor Clap Trap called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Clap Trap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHit();
	this->_energyPoints = other.getEnergy();
	this->_attackDamage = other.getAttack();
	std::cout << "Copy constructor Clap Trap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHit();
	this->_energyPoints = other.getEnergy();
	this->_attackDamage = other.getAttack();
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints > 0)
		{
			this->_energyPoints--;
			std::cout << "ClapTrap " << this->_name << " attacks " << target;
			std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
			std::cout << "Energy points : " << this->_energyPoints << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " has no energie left..." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!" << std::endl;
		if (this->_hitPoints > 0)
			std::cout << "Hit points : " << this->_hitPoints << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " has died ..." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints > 0)
		{
			this->_hitPoints += amount;
			this->_energyPoints--;
			std::cout << "ClapTrap " << this->_name << " repairs " << amount << " hit points!" << std::endl;
			std::cout << "Hit points : " << this->_hitPoints << std::endl;
			std::cout << "Energy points : " << this->_energyPoints << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " has no energie left..." << std::endl;
	}
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

int ClapTrap::getHit() const
{
	return this->_hitPoints;
}

int ClapTrap::getEnergy() const
{
	return this->_energyPoints;
}

int ClapTrap::getAttack() const
{
	return this->_attackDamage;
}

void ClapTrap::setEnergy()
{
	this->_energyPoints--;
}