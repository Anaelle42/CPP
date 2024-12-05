#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	ClapTrap bob("Bob", 10, 10, 10);
	bob.attack("dragon");
	bob.takeDamage(4);
	bob.attack("Jacob");
	bob.attack("Bobby");
	bob.beRepaired(3);

	// std::cout << std::endl;
	// ScavTrap mael("mael");
	// mael.attack("dracofeau");
	// mael.takeDamage(150);

	std::cout << std::endl;
	FragTrap ana("ana");
	ana.beRepaired(1);
	ana.attack("Jacob");
	ana.highFivesGuys();

	return 0;
}