#include "../includes/Point.hpp"

int main( void )
{
	Point a;
	Point b(10,3);
	Point c(65, 43);
	Point d(12, 23);

	std::cout << bsp(a, b, c, d) << std::endl;

	return 0;
}