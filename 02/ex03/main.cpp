#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(0, 0), b(4, 0), c(0, 3);
    Point inside(1, 1);  // Inside the triangle
    Point outside(5, 5);  // Outside the triangle
    Point onEdge(2, 0);  // On the edge between (0, 0) and (4, 0)

    // Test case 1: Point inside the triangle
    if (bsp(a, b, c, inside))
        std::cout << "Point (1, 1) is inside the triangle!" << std::endl;
    else
        std::cout << "Point (1, 1) is outside the triangle or on the edge!" << std::endl;

    // Test case 2: Point outside the triangle
    if (bsp(a, b, c, outside))
        std::cout << "Point (5, 5) is inside the triangle!" << std::endl;
    else
        std::cout << "Point (5, 5) is outside the triangle or on the edge!" << std::endl;


    // Test case 3: Point on the edge of the triangle
    if (bsp(a, b, c, onEdge))
        std::cout << "Point (2, 0) is inside the triangle!" << std::endl;
    else
        std::cout << "Point (2, 0) is outside the triangle or on the edge!" << std::endl;

    // Test case 3: Point on the same as a vertex
    if (bsp(a, b, c, a))
        std::cout << "Point (2, 0) is inside the triangle!" << std::endl;
    else
        std::cout << "Point (2, 0) is outside the triangle or on the edge!" << std::endl;

    return 0;
}