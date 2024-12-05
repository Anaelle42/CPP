#include "../includes/ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");

	bob.attack("dragon");
	bob.takeDamage(4);
	bob.attack("Jacob");
	bob.attack("Bobby");
	bob.beRepaired(3);
	
	// bob.takeDamage(20);
	// bob.attack("Bobby");
	// bob.beRepaired(10);

	// bob.beRepaired(1);
	// bob.beRepaired(1);
	// bob.beRepaired(1);
	// bob.beRepaired(1);
	// bob.beRepaired(1);
	// bob.attack("Bobby");
	// bob.beRepaired(1);
	// bob.attack("Bobby");

	return 0;
}