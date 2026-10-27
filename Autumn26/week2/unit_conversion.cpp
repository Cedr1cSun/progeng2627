#include <iostream>

int main()
{
    double value;
    char unit;

    std::cout << "Enter a temperature and unit (e.g. 451 F or 100 c): ";
    std::cin >> value >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << (value - 32) * 5.0 / 9.0 << " C" << std::endl;
    } else if (unit == 'C' || unit == 'c') {
        std::cout << value * 9.0 / 5.0 + 32 << " F" << std::endl;
    } else {
        std::cout << "error, unit not recognised" << std::endl;
    }
}
