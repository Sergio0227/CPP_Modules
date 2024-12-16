#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"


class Point {

private:
    Fixed const x;
    Fixed const y;

    public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(Point &ref);
    ~Point();

    Point &operator=(Point const &ref);

    const Fixed &Point::getX(void) const;
    const Fixed &Point::getY(void) const;

};



#endif //POINT_HPP
