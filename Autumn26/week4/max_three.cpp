#include <iostream>

double max_three(double a, double b, double c)
{
    double max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main()
{
    std::cout << "max_three(9, 2, 5) = " << max_three(9, 2, 5) << std::endl;
    std::cout << "max_three(2, 9, 5) = " << max_three(2, 9, 5) << std::endl;
    std::cout << "max_three(2, 5, 9) = " << max_three(2, 5, 9) << std::endl;
    std::cout << "max_three(-1, -7, -3) = " << max_three(-1, -7, -3) << std::endl;
    std::cout << "max_three(4, 4, 4) = " << max_three(4, 4, 4) << std::endl;
}
