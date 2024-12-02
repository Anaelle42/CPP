#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie has been deleted: " << name << std::endl;
}

void Zombie::setName (std::string zombie_name)
{
	name = zombie_name;
}

void Zombie::announce ()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
