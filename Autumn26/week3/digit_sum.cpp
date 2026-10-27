// Own exercise (while loop): read a non-negative integer and print the sum of its digits.
// The number of digits is not known in advance, so the loop runs while digits are left.
#include <iostream>

int main()
{
    int n;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "error, need n >= 0" << std::endl;
        return 1;
    }

    int sum = 0;
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    std::cout << "digit sum: " << sum << std::endl;
}
