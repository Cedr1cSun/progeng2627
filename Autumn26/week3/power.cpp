#include <iostream>

int main()
{
    double x;
    int n;

    std::cout << "Enter x and n: ";
    std::cin >> x >> n;

    if (n < 0) {
        std::cout << "error, need n >= 0" << std::endl;
        return 1;
    }

    double result = 1;
    for (int i = 0; i < n; i++) {
        result = result * x;
    }

    std::cout << x << "^" << n << " = " << result << std::endl;
}
