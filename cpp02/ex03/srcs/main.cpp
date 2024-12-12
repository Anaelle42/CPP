#include "../includes/Point.hpp"

int main( void )
{
	Point a (-1, -2);
	Point b (-2 ,1);
	Point c (1,4);
	Point d (0, 2);

	int res;
	
	res = bsp(a, b, c, d);
	std::cout << res << std::endl;
	if (res)
		std::cout << "The point is inside of the triangle" << std::endl;
	else
		std::cout << "The point is outside of the triangle" << std::endl;
	return 0;
}