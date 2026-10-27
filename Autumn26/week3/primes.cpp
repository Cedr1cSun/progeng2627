#include <iostream>

int main()
{
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    // stop at the first factor, and only try up to sqrt(n): a factor above it pairs with one below
    // i <= n / i is i * i <= n without overflowing int
    int i = 2;
    while (i <= n / i && n % i != 0) {
        i = i + 1;
    }

    if (n >= 2 && i > n / i) {
        std::cout << n << " is prime" << std::endl;
    } else {
        std::cout << n << " is not prime" << std::endl;
    }
}
