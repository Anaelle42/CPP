#include "../includes/DiamondTrap.hpp"

int main()
{
	DiamondTrap max("Max");
	max.whoAmI();
	max.attack("bob"); // mauvais nom

	return 0;
}