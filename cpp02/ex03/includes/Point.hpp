#ifndef POINT_HPP
# define POINT_HPP

#include "../includes/Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
		
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		~Point();

		void operator=(const Point& other);
		
		const Fixed getX() const;
		const Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif