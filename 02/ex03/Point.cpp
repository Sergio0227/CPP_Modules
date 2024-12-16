#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::~Point()
{
}

Point::Point(const Fixed  x, const Fixed  y): x(x), y(y)
{
}

Point::Point(Point &ref): x(ref.getX()), y(ref.getY())
{
}

Point &Point::operator=(const Point &ref)
{
    (void)ref;
    return *this;
}

const Fixed &Point::getX(void) const
{
    return (this->x);
}

const Fixed &Point::getY(void) const
{
    return (this->y);
}