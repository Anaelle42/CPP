#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string other, int hit, int energie, int attack) : name(other), hitPoints(hit), energiePoints(energie), attackDamage(attack)
{
	std::cout << "Default constructor Clap Trap called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Clap Trap called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints > 0)
	{
		if (energiePoints > 0)
		{
			energiePoints--;
			std::cout << "ClapTrap " << name << " attacks " << target;
			std::cout << ", causing " << attackDamage << " points of damage!" << std::endl;
			std::cout << "Energie points : " << energiePoints << std::endl;
		}
		else
			std::cout << "ClapTrap " << name << " has 0 energie ..." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " loses " << amount << " hit points!" << std::endl;
		if (hitPoints > 0)
			std::cout << "Hit points : " << hitPoints << std::endl;
		else
			std::cout << "ClapTrap " << name << " die ..." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(hitPoints > 0)
	{
		if (energiePoints > 0)
		{
			hitPoints += amount;
			energiePoints--;
			std::cout << "ClapTrap " << name << " repaires " << amount << " hit points!" << std::endl;
			std::cout << "Hit points : " << hitPoints << std::endl;
			std::cout << "Energie points : " << energiePoints << std::endl;
		}
		else
			std::cout << "ClapTrap " << name << " has 0 energie ..." << std::endl;
	}
}

std::string ClapTrap::getName()
{
	return name;
}

int ClapTrap::getHit()
{
	return hitPoints;
}

int ClapTrap::getEnergie()
{
	return energiePoints;
}

void ClapTrap::setEnergie()
{
	energiePoints--;
}

int ClapTrap::getAttack()
{
	return attackDamage;
}
