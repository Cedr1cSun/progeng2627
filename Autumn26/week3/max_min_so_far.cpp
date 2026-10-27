#include <iostream>

int main()
{
    int n;
    int max = 0, min = 0;
    bool first = true;

    std::cout << "Enter integers (0 to stop):" << std::endl;
    while (std::cin >> n && n != 0) {
        if (first || n > max) {
            max = n;
        }
        if (first || n < min) {
            min = n;
        }
        first = false;
        std::cout << "max so far: " << max << ", min so far: " << min << std::endl;
    }
}
