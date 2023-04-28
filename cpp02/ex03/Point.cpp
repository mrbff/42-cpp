#include "Point.hpp"

Point::Point() : _x(Fixed(0)) , _y(Fixed(0)) {}

Point::Point(const float x, const float y) : _x(Fixed(x)) , _y(Fixed(y)) {}

Point::Point(Point const & ref) : _x(ref._x) , _y(ref._y) {}

Point::~Point() {}

Point& Point::operator=(const Point& point)
{
    if (this != &point)
    {
        _x = point._x;
        _y = point._y;
    }

    return (*this);
}

Fixed Point::getX(void)
{
    return (_x);
}

Fixed Point::getY(void)
{
    return (_y);
}

void Point::setX(Fixed const & ref)
{
    _x = ref;
}

void Point::setY(Fixed const & ref)
{
    _y = ref;
}