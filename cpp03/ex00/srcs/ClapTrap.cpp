#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string other) : name(other), hitPoints(10), energiePoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
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