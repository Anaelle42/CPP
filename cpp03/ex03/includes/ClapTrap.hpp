#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitPoints;
		int energiePoints;
		int attackDamage;

	public:
		ClapTrap(std::string other, int hit, int energie, int attack);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		int getHit();
		int getEnergie();
		void setEnergie();
		int getAttack();


};


# endif