#include <iostream>

int main()
{
    double celsius;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    std::cout << "Fahrenheit: " << celsius * 9.0 / 5.0 + 32 << std::endl;
}
