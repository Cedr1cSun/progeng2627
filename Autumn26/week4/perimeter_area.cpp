#include <iostream>

void perimeter_area(double a, double b, double& perimeter, double& area)
{
    perimeter = 2 * (a + b);
    area = a * b;
}

int main()
{
    double perimeter, area;

    perimeter_area(3, 4, perimeter, area);
    std::cout << "3 x 4: perimeter " << perimeter << ", area " << area << std::endl;

    perimeter_area(2.5, 2.5, perimeter, area);
    std::cout << "2.5 x 2.5: perimeter " << perimeter << ", area " << area << std::endl;
}
