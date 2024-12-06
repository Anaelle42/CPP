#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	private:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		virtual std::string getType() const;
		void makeSound() const;
};


#endif