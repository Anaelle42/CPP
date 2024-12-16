#include "../includes/DiamondTrap.hpp"

int main()
{
	DiamondTrap max("Max");

	std::cout << "Name : " << max.getName() << std::endl;
	std::cout << "Hit points : " << max.getHit() << std::endl;
	std::cout << "Energy Points : " << max.getEnergy() << std::endl;
	std::cout << "Attack damage : " << max.getAttack() << std::endl;
	
	max.whoAmI();
	max.attack("Dracaufeu");
	
	return 0;
}