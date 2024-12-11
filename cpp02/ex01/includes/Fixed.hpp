#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	private:
		int _value;
		static const int _nbBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
		void operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed(const int other);
		Fixed(const float other);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed& other);

#endif