// Own exercise (for loop): read n and print 1/1^2 + 1/2^2 + ... + 1/n^2.
// The sum approaches pi^2/6 as n grows, so print that too for comparison.
#include <iostream>
#include <cmath>

int main()
{
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    double sum = 0;
    for (int k = 1; k <= n; k++) {
        sum = sum + 1.0 / k / k;
    }

    double pi = std::acos(-1.0);
    std::cout << "sum: " << sum << std::endl;
    std::cout << "pi^2/6: " << pi * pi / 6 << std::endl;
}
