#include "../includes/Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	// a.setRawBits(3);
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	// c = a;
	// std::cout << c.getRawBits() << std::endl;
	
	return 0;
}