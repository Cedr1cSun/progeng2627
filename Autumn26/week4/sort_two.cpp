#include <iostream>

void myswap(double& a, double& b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

void sort_two_numbers(double& s1, double& s2)
{
    if (s1 > s2) {
        myswap(s1, s2);
    }
}

int main()
{
    double a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    sort_two_numbers(a, b);
    std::cout << "sorted: " << a << " " << b << std::endl;
}
