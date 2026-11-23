#include <iostream>

int main() {
    long long originalNum = 0;

    std::cout << "Enter an integer: ";
    if (!(std::cin >> originalNum)) {
        std::cerr << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }

    // Negative numbers are not considered palindromes because of the minus sign
    if (originalNum < 0) {
        std::cout << "Result: " << originalNum << " is NOT a palindrome.\n";
        return 0;
    }

    long long temp = originalNum;
    long long reversedNum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        reversedNum = (reversedNum * 10) + digit;
        temp /= 10;
    }

    std::cout << "Reversed number: " << reversedNum << "\n";

    if (originalNum == reversedNum) {
        std::cout << "Result: " << originalNum << " IS a palindrome.\n";
    } else {
        std::cout << "Result: " << originalNum << " is NOT a palindrome.\n";
    }

    return 0;
}