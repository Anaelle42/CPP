#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string newName) : name(newName)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack() const
{
	if(weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with nothing" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}