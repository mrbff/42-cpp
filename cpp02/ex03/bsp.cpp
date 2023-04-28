#include "Point.hpp"

Fixed area(Point p1, Point p2, Point p3)
{
    return ((
        p1.getX() * (p2.getY() - p3.getY()) + 
        p2.getX() * (p3.getY() - p1.getY()) +
        p3.getX() * (p1.getY() - p2.getY())) / Fixed(2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed totA = area(a, b, c);
    Fixed t1 = area(a, b, point);
    Fixed t2 = area(a, point, c);
    Fixed t3 = area(point, b, c);

    if (std::abs(totA.toFloat()) >= std::abs(t1.toFloat()) + std::abs(t2.toFloat()) + std::abs(t3.toFloat()))
        return (true);
    else
        return (false);
}