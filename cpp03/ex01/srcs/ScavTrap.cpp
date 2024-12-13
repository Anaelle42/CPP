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
	if (this->getHit() > 0)
	{
		if (this->getEnergie() > 0)
		{
			this->setEnergie();
			std::cout << "ScavTrap " << this->getName() << " attacks " << target;
			std::cout << ", causing " << this->getAttack() << " points of damage!" << std::endl;
			std::cout << "Energy points : " << this->getEnergie() << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->getName() << "has no energie left..." << std::endl;
	}
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode" << std::endl;
}
