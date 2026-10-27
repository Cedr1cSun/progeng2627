#include <iostream>

int main()
{
    double a, b;

    std::cout << "Enter the two side lengths: ";
    std::cin >> a >> b;

    std::cout << "perimeter: " << 2 * (a + b) << std::endl;
    std::cout << "area: " << a * b << std::endl;
}
