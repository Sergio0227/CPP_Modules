#pragma once
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

    const Fixed &getX(void) const;
    const Fixed &getY(void) const;

};



#endif //POINT_HPP
