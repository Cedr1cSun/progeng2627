#include <iostream>

int main()
{
    int n;
    int sum = 0;

    std::cout << "Enter integers (0 to stop):" << std::endl;
    while (std::cin >> n && n != 0) {
        sum = sum + n;
        std::cout << "sum so far: " << sum << std::endl;
    }
}
