#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie constructor called: " << this->_name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor called: " << this->_name << std::endl;
}

void Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
