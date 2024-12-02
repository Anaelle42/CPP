#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string newName);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon &newWeapon);
};


#endif
