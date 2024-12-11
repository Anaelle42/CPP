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
		Fixed(const int other);
		Fixed(const float other);

		void operator=(const Fixed& other);
		bool operator>(Fixed const& other) const;
		bool operator<(Fixed const& other) const;
		bool operator>=(Fixed const& other) const;
		bool operator<=(Fixed const& other) const;
		bool operator==(Fixed const& other) const;
		bool operator!=(Fixed const& other) const;
		Fixed operator+(Fixed const& other) const;
		Fixed operator-(Fixed const& other) const;
		Fixed operator*(Fixed const& other) const;
		Fixed operator/(Fixed const& other) const;
		Fixed operator++(int); // pre incrementation
		Fixed operator--(int);
		Fixed operator++(); // post incrementation
		Fixed operator--();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed min(Fixed& first, Fixed& second);
		static Fixed const min(Fixed const& first, Fixed const& second);
		static Fixed max(Fixed& first, Fixed& second);
		static Fixed const max(Fixed const& first, Fixed const& second);
};

std::ostream &operator<<(std::ostream& os, const Fixed& other);

#endif