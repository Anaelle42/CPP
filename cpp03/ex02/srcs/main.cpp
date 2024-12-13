#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	bob.attack("Dracaufeu");

	std::cout << std::endl;

	FragTrap max("Max");
	max.attack("Jacob");
	max.beRepaired(1);
	max.highFivesGuys();

	return 0;
}