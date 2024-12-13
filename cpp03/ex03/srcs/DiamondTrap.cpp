#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	// frag est initialise apres scav, ca remplace ses valeurs
	std::cout << "energie de scav: " << ScavTrap::_energyPoints << std::endl; //

	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default constructor Diamond Trap called" << std::endl;

	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy Points : " << this->_hitPoints << std::endl; // prends valeur de frag
	std::cout << "Attack damage : " << this->_attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor Diamond Trap called" << std::endl;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "Diamond Trap name : " << this->_name;
	std::cout << " | Clap Trap name : " << this->getName() << std::endl;
}
