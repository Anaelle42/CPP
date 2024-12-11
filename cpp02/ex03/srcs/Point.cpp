#include "../includes/Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::~Point()
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point& other)
{
	(void)other;
	// _x = other.x;
	// _y = other.y;
}

void Point::operator=(const Point& other)
{
	(void)other;
	// *this = Point(other._x.toFloat(),other._y.toFloat());
	// *this = other;
	// _x = other.x;
	// _y = other.y;
}

const Fixed Point::getX() const
{
	return _x;
}

const Fixed Point::getY() const
{
	return _y;
}