#include "../includes/DiamondTrap.hpp"

int main()
{
	ClapTrap clap;
	FragTrap frag;
	ScavTrap scav;
	std::cout << "attack : " << clap.getAttack() << std::endl;
	std::cout << "attack : " << frag.getAttack() << std::endl;
	std::cout << "attack : " << scav.getAttack() << std::endl;

	DiamondTrap max("Max");
	// std::cout << "attack : " << max.getAttack() << std::endl;

	return 0;
}