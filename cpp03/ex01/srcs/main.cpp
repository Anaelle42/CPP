#include "../includes/ScavTrap.hpp"

int main()
{
	ClapTrap bob("Bob", 10, 10, 10);

	bob.attack("dragon");
	bob.takeDamage(4);
	bob.beRepaired(3);

	std::cout << std::endl;

	ScavTrap mael("Mael");

	mael.attack("Dracaufeu");
	mael.takeDamage(90);
	mael.takeDamage(150);
	mael.attack("Jacob");
	mael.beRepaired(300);

	return 0;
}