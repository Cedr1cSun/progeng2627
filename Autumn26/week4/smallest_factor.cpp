#include <iostream>

// for n >= 2: returns the smallest factor above 1, or 0 if n is prime
int smallest_factor(int n)
{
    // i <= n / i is i * i <= n without overflowing int
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return 0;
}

int main()
{
    std::cout << "smallest_factor(15) = " << smallest_factor(15) << std::endl;
    std::cout << "smallest_factor(49) = " << smallest_factor(49) << std::endl;
    std::cout << "smallest_factor(100) = " << smallest_factor(100) << std::endl;
    std::cout << "smallest_factor(97) = " << smallest_factor(97) << std::endl;
    std::cout << "smallest_factor(2) = " << smallest_factor(2) << std::endl;
}
