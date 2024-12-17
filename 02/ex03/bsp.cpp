#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float area;

    area = (
            (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()))
            + (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
            + (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
            ) / 2;

}