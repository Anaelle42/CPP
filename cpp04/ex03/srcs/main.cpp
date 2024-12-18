#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"


int main()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	//ICharacter* me = new Character("me");

	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	AMateria * ice = new Ice();
	AMateria * cure = new Cure();
	bob->use(9, *bob);

	bob->equip(ice);
	bob->equip(cure);

	bob->use(0, *bob);
	bob->use(1, *bob);
	
	// bob->unequip(0);
	bob->equip(cure);
	bob->use(0, *bob);

	AMateria * cure2 = new Cure();
	bob->equip(cure2);
	bob->use(0, *bob);

	// me->use(0, *bob);
	// me->use(1, *bob);

	delete bob;
	// delete me;
	// delete src;

	return 0;
}