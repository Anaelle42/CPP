#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../includes/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	
	public:
		ScavTrap(std::string other);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};


#endif