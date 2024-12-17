#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal* j;
	const Animal* i;

	i = new Cat();
	j = new Dog();
	
	delete i;
	delete j;

	std::cout << std::endl;

	const Animal* animals[6];
	for (int i (0); i < 3; i++)
		animals[i] = new Dog();
	for (int i (3); i < 6; i++)
		animals[i] = new Cat();

	for (int i (0); i < 6; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	for (int i (0); i < 6; i++)
		delete animals[i];

	Dog a;
	{
		Dog b = a;
		
	}
	Cat aa;
	{
		Cat bb;
		bb = aa;
	}

	return 0;
}
