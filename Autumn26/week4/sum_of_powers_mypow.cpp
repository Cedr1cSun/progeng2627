#include <iostream>

double mypow(double base, int exp)
{
    int n = exp;
    if (n < 0) {
        n = -n;
    }

    double result = 1;
    for (int i = 0; i < n; i++) {
        result = result * base;
    }

    if (exp < 0) {
        result = 1 / result;
    }
    return result;
}

int main()
{
    double x;
    int n;

    std::cout << "Enter x and n: ";
    std::cin >> x >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + mypow(x, i);
    }

    std::cout << "sum of powers: " << sum << std::endl;
}
