#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual ~AMateria();
		
		std::string const & getType() const;
		void setType(std::string const type);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif