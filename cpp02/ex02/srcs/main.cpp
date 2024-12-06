#include "../includes/Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed c (2);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;

	std::cout << std::endl;
	a = c + b;
	std::cout << "a is " << a << std::endl;
	a = c - b;
	std::cout << "a is " << a << std::endl;
	a = c * b;
	std::cout << "a is " << a << std::endl;
	a = b / c;
	std::cout << "a is " << a << std::endl;
	
	std::cout << std::endl;
	std::cout << "> " << (c > b) << std::endl;
	std::cout << "< " << (c < b) << std::endl;
	std::cout << ">= " << (c >= b) << std::endl;
	std::cout << "<= " << (c <= b) << std::endl;
	std::cout << "== " << (c == b) << std::endl;
	std::cout << "!= " << (c != b)  << std::endl << std::endl;

	Fixed d;
	Fixed const e( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << d << std::endl;
	std::cout << ++d << std::endl;
	std::cout << d << std::endl;
	std::cout << d++ << std::endl;
	std::cout << d << std::endl;

	std::cout << e << std::endl;

	std::cout << Fixed::max( d, e ) << std::endl;
	std::cout << Fixed::min( d, e ) << std::endl;

	return 0;
}