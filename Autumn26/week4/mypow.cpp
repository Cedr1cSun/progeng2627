#include <iostream>

double mypow(double base, int exp){
    double result = 1;
    // 1 so that base^0 = 1 and the loop can multiply into it

    int n = exp;
    if(exp < 0){
        n = -exp;
    }

    for(int i = 0; i < n; i++){
        result = result * base;
    }

    // base^-n = 1 / base^n
    if(exp < 0){
        result = 1 / result;
    }

    return result;
}

int main(){
    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "(-3)^3: " << mypow(-3, 3) << std::endl;
    std::cout << "2^-2: " << mypow(2, -2) << std::endl;
    std::cout << "(-2)^-3: " << mypow(-2, -3) << std::endl;
}
