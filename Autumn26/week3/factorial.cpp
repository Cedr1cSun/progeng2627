#include <iostream>

int main()
{
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    // 21! does not fit in a long long
    if (n < 0 || n > 20) {
        std::cout << "error, need 0 <= n <= 20" << std::endl;
        return 1;
    }

    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i;
    }

    std::cout << n << "! = " << result << std::endl;
}
