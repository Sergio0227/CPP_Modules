#include "Point.hpp"

float area(Point const &a, Point const &b, Point const &c)
{
    float area = ((a.getX().toFloat() * ((b.getY().toFloat()) - (c.getY().toFloat()))) +
          (b.getX().toFloat() * ((c.getY().toFloat()) - (a.getY().toFloat()))) +
          (c.getX().toFloat() * ((a.getY().toFloat()) - (b.getY().toFloat())))) / 2.0f;
    if (area < 0)
        area = -area;
    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float original_triangle = area(a, b, c);

    float pab = area(point, a, b);
    float pbc = area(point, b, c);
    float pca = area(point, c, a);

    float sum_area = pab + pbc + pca;
    if (sum_area != original_triangle || pab == 0 || pbc == 0 || pca == 0)
        return false;
    return true;
}

