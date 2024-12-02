#include "../includes/Zombie.hpp"

int main()
{
	randomChump("Mael");
	std :: cout << "hello" << std::endl;
	Zombie* zombie = newZombie("Anaelle");
	std :: cout << "hello" << std::endl;
	zombie->announce();
	delete zombie;
	return 0;
}