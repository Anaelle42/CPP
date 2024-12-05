#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string other) : ClapTrap(other, 100, 100, 30)
{
	std::cout << "Default constructor Frag Trap called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Frag Trap called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High fiiiiiiiives ?!" << std::endl;
}
