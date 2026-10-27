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

double sum_of_powers(double x, int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + mypow(x, i);
    }
    return sum;
}

int main()
{
    std::cout << "sum_of_powers(2, 3) = " << sum_of_powers(2, 3) << std::endl;
    std::cout << "sum_of_powers(1, 5) = " << sum_of_powers(1, 5) << std::endl;
    std::cout << "sum_of_powers(0.5, 2) = " << sum_of_powers(0.5, 2) << std::endl;
    std::cout << "sum_of_powers(-1, 3) = " << sum_of_powers(-1, 3) << std::endl;
    std::cout << "sum_of_powers(3, 0) = " << sum_of_powers(3, 0) << std::endl;
}
