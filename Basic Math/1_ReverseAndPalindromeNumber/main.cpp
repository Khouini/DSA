#include <iostream>


int getReverseNumber(int n) {
    int result = 0;
    while (n > 0) {
        const int lastDigit = n % 10;
        result = (result * 10) + lastDigit ;
        n = n / 10;
    }
    return result;
}

bool isPalindromeNumber(const int n) {
    if (getReverseNumber(n) == n) {
        return true;
    }
    else return false;
}

int main() {
    const int n = 121;
    // std::cout << getReverseNumber(123) << std::endl;
    std::cout << "is " << n << " palindrome number :" << isPalindromeNumber(n);
    return 0;
}
