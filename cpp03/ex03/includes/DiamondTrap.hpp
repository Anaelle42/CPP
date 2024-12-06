#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(std::string other);
		~DiamondTrap();
};


#endif