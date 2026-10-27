#include <iostream>

int main()
{
    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n % 3 == 0) {
        std::cout << n << " is a multiple of 3" << std::endl;
    } else {
        std::cout << n << " is not a multiple of 3" << std::endl;
    }
}
