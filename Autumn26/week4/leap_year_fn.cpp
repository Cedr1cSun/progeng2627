#include <iostream>

bool leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << "1600: " << leap_year(1600) << std::endl;
    std::cout << "2000: " << leap_year(2000) << std::endl;
    std::cout << "1700: " << leap_year(1700) << std::endl;
    std::cout << "1900: " << leap_year(1900) << std::endl;
    std::cout << "2100: " << leap_year(2100) << std::endl;
    std::cout << "2400: " << leap_year(2400) << std::endl;
}
