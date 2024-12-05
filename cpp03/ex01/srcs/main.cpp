#include "../includes/ScavTrap.hpp"

int main()
{
	ClapTrap bob("Bob", 10, 10, 10);
	bob.attack("dragon");
	bob.takeDamage(4);
	bob.attack("Jacob");
	bob.attack("Bobby");
	bob.beRepaired(3);

	std::cout << std::endl;
	ScavTrap mael("mael");
	mael.attack("dracofeau");
	mael.takeDamage(90);
	mael.takeDamage(150);
	mael.attack("Jacob");
	mael.attack("dino");
	mael.beRepaired(300);

	return 0;
}