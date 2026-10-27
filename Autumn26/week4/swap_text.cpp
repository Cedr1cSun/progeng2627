#include <iostream>
#include <string>

void swap_text(std::string& a, std::string& b)
{
    std::string tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    std::string a = "hello";
    std::string b = "world";

    std::cout << "before: a = " << a << ", b = " << b << std::endl;
    swap_text(a, b);
    std::cout << "after: a = " << a << ", b = " << b << std::endl;
}
