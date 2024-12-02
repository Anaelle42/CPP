#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon& newWeapon) : name(newName), weapon(newWeapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
