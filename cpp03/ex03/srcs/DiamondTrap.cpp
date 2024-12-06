#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string other) : name(other)
{
	std::cout << "Default constructor Diamond Trap called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor Diamond Trap called" << std::endl;
}