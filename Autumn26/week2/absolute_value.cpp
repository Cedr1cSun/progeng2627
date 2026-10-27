#include <iostream>

int main()
{
    double x;

    std::cout << "Enter a number: ";
    std::cin >> x;

    if (x < 0) {
        x = -x;
    }

    std::cout << "absolute value: " << x << std::endl;
}
