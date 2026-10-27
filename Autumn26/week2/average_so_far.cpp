#include <iostream>

int main()
{
    double x;
    double sum = 0;
    int count = 0;

    std::cout << "Enter numbers (0 to stop):" << std::endl;
    while (std::cin >> x && x != 0) {
        sum = sum + x;
        count = count + 1;
        std::cout << "average so far: " << sum / count << std::endl;
    }
}
