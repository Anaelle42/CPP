#include "../includes/Point.hpp"

float isInside(Point const a, Point const b, Point const point)
{
	float value;
	
	value = (b.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat()  - a.getY().toFloat())- (b.getY().toFloat()  - a.getY().toFloat()) * (point.getX().toFloat() - a.getX().toFloat());
	return value;     
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float ab;
	float bc;
	float ca;

	ab = isInside(a, b, point);
	bc = isInside(b, c, point);
	ca = isInside(c, a, point);
	// std::cout << ab << std::endl;
	// std::cout << bc << std::endl;
	// std::cout << ca << std::endl;

	if ((ab > 0 && bc > 0 && ca > 0) || (ab < 0 && bc < 0 && ca < 0))
		return (true);
	return (false); 	      
}
