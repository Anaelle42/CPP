#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 10, 10, 1), ScavTrap("scav"), FragTrap("frag")
{
	
	this->_name = name;
	std::cout << ScavTrap::getAttack() << std::endl;
	std::cout << "Default constructor Diamond Trap called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor Diamond Trap called" << std::endl;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "Diamond Trap name : " << this->_name;
	std::cout << " | Clap Trap name : " << this->getName() << std::endl;
}
