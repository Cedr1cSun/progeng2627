#include <iostream>
#include <string>

int main()
{
    std::string name, surname;

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your surname: ";
    std::cin >> surname;

    std::cout << "hello " << name << " " << surname << std::endl;
}
