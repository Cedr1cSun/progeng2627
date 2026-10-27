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
    int low, high;

    std::cout << "Enter two integers: ";
    std::cin >> low >> high;

    for (int n = low; n <= high; n++) {
        if (n >= 2 && smallest_factor(n) == 0) {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;
}
