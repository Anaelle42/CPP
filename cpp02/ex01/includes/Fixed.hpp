#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int valeur;
		static const int nbbits = 8;;
	public:
		Fixed();
		Fixed(const int other);
		Fixed(const float other);
		Fixed(const Fixed& other);
		~Fixed();
		void operator=(const Fixed& other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed& other);


#endif