#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"


int main()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* me = new Character("me");

	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter* bob = new Character("bob");
	
	// me->use(0, *bob);
	// me->use(1, *bob);

	// delete bob;
	// delete me;
	// delete src;

	Ice a;

	std::cout << a.getType() << std::endl;
	a.setType("ice 2");
	AMateria* b = a.clone();
	std::cout << a.getType() << std::endl;
	std::cout << b->getType() << std::endl;




	return 0;
}