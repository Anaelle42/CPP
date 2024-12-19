#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal* meta;
	const Animal* i;
	const Animal* j;
	
	meta = new Animal();
	i = new Cat();
	j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta; 
	delete i;
	delete j;

	std::cout << std::endl;

	const WrongAnimal* animal;
	const WrongAnimal* cat;
	
	animal = new WrongAnimal();
	cat = new WrongCat();

	std::cout << animal->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	animal->makeSound();
	cat->makeSound();

	delete animal;
	delete cat;
	
	return 0;
}