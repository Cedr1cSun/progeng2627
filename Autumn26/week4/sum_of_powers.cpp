#include <iostream>
#include <cmath>

int main()
{
    double x;
    int n;

    std::cout << "Enter x and n: ";
    std::cin >> x >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + std::pow(x, i);
    }

    std::cout << "sum of powers: " << sum << std::endl;
}
