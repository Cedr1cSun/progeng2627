#include <iostream>

int main()
{
    int low, high;

    std::cout << "Think of a number. Enter the lower and upper bounds: ";
    std::cin >> low >> high;

    if (low > high) {
        std::cout << "error, lower bound is above upper bound" << std::endl;
        return 1;
    }

    int guess = low + (high - low) / 2;
    char answer = ' ';

    std::cout << "My guess is " << guess << ". Enter h (too high), l (too low) or c (correct): ";
    while (std::cin >> answer && answer != 'c') {
        if (answer == 'h') {
            high = guess - 1;
        } else if (answer == 'l') {
            low = guess + 1;
        }

        if (low > high) {
            std::cout << "Your answers contradict each other, no number is left" << std::endl;
            return 1;
        }

        guess = low + (high - low) / 2;
        std::cout << "My guess is " << guess << ". Enter h (too high), l (too low) or c (correct): ";
    }

    if (answer == 'c') {
        std::cout << "Got it, your number is " << guess << std::endl;
    }
}
