#include <iostream>

int main()
{
    double pounds, rate;

    std::cout << "Enter the amount in pounds: ";
    std::cin >> pounds;
    std::cout << "Enter the exchange rate (euros per pound): ";
    std::cin >> rate;

    std::cout << "euros: " << pounds * rate << std::endl;
}
