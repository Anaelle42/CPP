#include "../includes/Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed c (2);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;

	a = c + b;
	std::cout << "a is " << a << std::endl;

	return 0;
}