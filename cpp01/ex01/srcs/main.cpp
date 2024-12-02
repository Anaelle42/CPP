#include "../includes/Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(4, "mael");
	(void)horde;

	for (int i = 0; i < 4; i++)
	{
		horde[i].announce();
	}

	// Zombie* otherHorde = zombieHorde(10, "Anaelle");
	// (void)otherHorde;

	// for (int i = 0; i < 10; i++)
	// {
	// 	otherHorde[i].announce();
	// }
	delete [] horde;
	// delete [] otherHorde;
	return 0;
}