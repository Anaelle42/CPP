#include "../includes/Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(4, "Mael");

	for (int i = 0; i < 4; i++)
	{
		horde[i].announce();
	}
	delete [] horde;

	// Zombie* otherHorde = zombieHorde(10, "Anaelle");

	// for (int i = 0; i < 10; i++)
	// {
	// 	otherHorde[i].announce();
	// }
	// delete [] otherHorde;
	
	return 0;
}