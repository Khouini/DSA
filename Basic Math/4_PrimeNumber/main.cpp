#include <iostream>
#include <cmath>

bool isPrimeNumber(const int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers

    int count = 0;
    for (int i = 1; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) count++; // Count only distinct divisors
        }
        if (count > 2) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "is 2 PrimeNumber (expected: true): " << isPrimeNumber(2) << "\n";
    std::cout << "is 3 PrimeNumber (expected: true): " << isPrimeNumber(3) << "\n";
    std::cout << "is 4 PrimeNumber (expected: false): " << isPrimeNumber(4) << "\n";
    std::cout << "is 5 PrimeNumber (expected: true): " << isPrimeNumber(5) << "\n";
    std::cout << "is 10 PrimeNumber (expected: false): " << isPrimeNumber(10) << "\n";
    std::cout << "is 11 PrimeNumber (expected: true): " << isPrimeNumber(11) << "\n";
    std::cout << "is 12 PrimeNumber (expected: false): " << isPrimeNumber(12) << "\n";
    std::cout << "is 13 PrimeNumber (expected: true): " << isPrimeNumber(13) << "\n";
    std::cout << "is 1 PrimeNumber (expected: false): " << isPrimeNumber(1) << "\n";
    std::cout << "is 0 PrimeNumber (expected: false): " << isPrimeNumber(0) << "\n";
    std::cout << "is -7 PrimeNumber (expected: false): " << isPrimeNumber(-7) << "\n";

    return 0;
}
