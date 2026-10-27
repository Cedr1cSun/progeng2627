#include <iostream>

double max_two(double a, double b)
{
    if (a > b) {
        return a;
    }
    return b;
}

int main()
{
    double a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "max: " << max_two(a, b) << std::endl;
}
