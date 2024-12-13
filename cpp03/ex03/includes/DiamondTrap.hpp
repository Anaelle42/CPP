#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();

		void whoAmI() const;
};

#endif