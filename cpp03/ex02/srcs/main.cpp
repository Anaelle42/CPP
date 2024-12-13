#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	ClapTrap bob("Bob", 10, 10, 10);
	bob.attack("Dracaufeu");

	std::cout << std::endl;

	FragTrap max("Max");
	max.attack("Jacob");
	max.beRepaired(1);
	max.highFivesGuys();

	return 0;
}