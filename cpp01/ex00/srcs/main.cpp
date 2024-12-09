#include "../includes/Zombie.hpp"

int main()
{
	randomChump("Bruno");

	Zombie* zombie = newZombie("Mael");
	zombie->announce();
	delete zombie;

	return 0;
}