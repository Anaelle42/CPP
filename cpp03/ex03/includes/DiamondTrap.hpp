#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap& other);

		void whoAmI() const;
		std::string getName() const;
};

#endif