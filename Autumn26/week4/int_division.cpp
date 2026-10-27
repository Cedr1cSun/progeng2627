#include <iostream>

void int_division(int a, int b, int& quotient, int& remainder)
{
    quotient = a / b;
    remainder = a % b;
}

int main()
{
    int q, r;

    int_division(17, 5, q, r);
    std::cout << "17 / 5: quotient " << q << ", remainder " << r << std::endl;

    int_division(15, 5, q, r);
    std::cout << "15 / 5: quotient " << q << ", remainder " << r << std::endl;

    int_division(4, 5, q, r);
    std::cout << "4 / 5: quotient " << q << ", remainder " << r << std::endl;
}
