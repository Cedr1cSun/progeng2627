#include <iostream>

int main()
{
    double weight, height;

    std::cout << "Enter your weight in kg: ";
    std::cin >> weight;
    std::cout << "Enter your height in m: ";
    std::cin >> height;

    std::cout << "BMI: " << weight / (height * height) << std::endl;
}
