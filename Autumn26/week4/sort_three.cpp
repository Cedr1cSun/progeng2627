#include <iostream>

void myswap(double& a, double& b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

void sort_three_numbers(double& s1, double& s2, double& s3)
{
    // after the first two swaps the largest is in s3; the last one orders s1 and s2
    if (s1 > s2) {
        myswap(s1, s2);
    }
    if (s2 > s3) {
        myswap(s2, s3);
    }
    if (s1 > s2) {
        myswap(s1, s2);
    }
}

int main()
{
    double a, b, c;

    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    sort_three_numbers(a, b, c);
    std::cout << "sorted: " << a << " " << b << " " << c << std::endl;
}
