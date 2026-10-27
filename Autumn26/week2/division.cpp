#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter a and b: ";
    std::cin >> a >> b;

    // b <= 0 would loop forever; negative a has no sensible remainder by subtraction
    if (a < 0 || b <= 0) {
        std::cout << "error, need a >= 0 and b > 0" << std::endl;
        return 1;
    }

    int quotient = 0;
    int remainder = a;
    while (remainder >= b) {
        remainder = remainder - b;
        quotient = quotient + 1;
    }

    std::cout << "quotient: " << quotient << std::endl;
    std::cout << "remainder: " << remainder << std::endl;
}
