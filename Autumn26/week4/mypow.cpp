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
    std::cout << "mypow(2, 10) = " << mypow(2, 10) << std::endl;
    std::cout << "mypow(-3, 3) = " << mypow(-3, 3) << std::endl;
    std::cout << "mypow(1.5, 2) = " << mypow(1.5, 2) << std::endl;
    std::cout << "mypow(5, 0) = " << mypow(5, 0) << std::endl;
    std::cout << "mypow(2, -2) = " << mypow(2, -2) << std::endl;
    std::cout << "mypow(-2, -3) = " << mypow(-2, -3) << std::endl;
}
