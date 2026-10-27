#include <iostream>

int main()
{
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > 1) {
                std::cout << "\t";
            }
            std::cout << i * j;
        }
        std::cout << std::endl;
    }
}
