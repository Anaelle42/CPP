#include "../includes/ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");

	bob.attack("dragon");
	bob.takeDamage(4);
	bob.beRepaired(3);
	
	std::cout << std::endl;
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.attack("Bobby");
	bob.beRepaired(1);

	std::cout << std::endl;
	bob.takeDamage(20);
	bob.attack("Bobby");
	bob.beRepaired(10);

	return 0;
}