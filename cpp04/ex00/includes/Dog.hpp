#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string type;
	public:
		Dog();
		~Dog();
		std::string getType() const;
		void makeSound() const;
};


#endif