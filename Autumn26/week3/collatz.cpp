#include <iostream>

int main()
{
    long long n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // 0 would stay at 0 forever
    if (n < 1) {
        std::cout << "error, need n >= 1" << std::endl;
        return 1;
    }

    long long max = n;
    int steps = 0;

    std::cout << n;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        std::cout << " " << n;
        steps = steps + 1;
        if (n > max) {
            max = n;
        }
    }
    std::cout << std::endl;

    std::cout << "steps: " << steps << std::endl;
    std::cout << "max: " << max << std::endl;
}
