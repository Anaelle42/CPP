#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string other) : ClapTrap(other, 100, 50, 20)
{
	std::cout << "Default constructor Scav Trap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Scav Trap called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getHit() > 0)
	{
		if (getEnergie() > 0)
		{
			setEnergie();
			std::cout << "ScavTrap " << getName() << " attacks " << target;
			std::cout << ", causing " << getAttack() << " points of damage!" << std::endl;
			std::cout << "Energie points : " << getEnergie() << std::endl;
		}
		else
			std::cout << "ScavTrap " << getName() << " has 0 energie ..." << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gatekeeper mode " << std::endl;
}
