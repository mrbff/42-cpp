#pragma once
#include "Fixed.hpp"

class Point {
    public:
        Point (void);
        Point (const float x, const float y);
        Point (Point const & ref);
        ~Point (void);
        Point& operator=(const Point& point);

        Fixed getX(void);
        Fixed getY(void);
        void setX(Fixed const & ref);
        void setY(Fixed const & ref);
    private:
        Fixed _x;
        Fixed _y;
};
