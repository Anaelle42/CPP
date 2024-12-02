#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string zombie) : name(zombie)
{
	std::cout << "Zombie has been created: " << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie has been deleted: " << name << std::endl;
}

void Zombie::announce ()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
