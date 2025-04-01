#include <iostream>
#include <cassert>

int findGCD(int n1, int n2) {
    for (int i = std::min(n1, n2); i > 0; i--) { // std::min(a, b)): O(1)
        if (n1 % i == 0 && n2 % i == 0) {
            return i;
        }
    }
    return 1; // In case no other divisor is found
}

void runTests() {
    // Test case 1: Both numbers are positive
    assert(findGCD(12, 18) == 6);
    std::cout << "Test 1 passed: GCD(12, 18) = 6" << std::endl;

    // Test case 2: One number is a multiple of the other
    assert(findGCD(8, 32) == 8);
    std::cout << "Test 2 passed: GCD(8, 32) = 8" << std::endl;

    // Test case 3: Numbers are coprime (GCD = 1)
    assert(findGCD(17, 19) == 1);
    std::cout << "Test 3 passed: GCD(17, 19) = 1" << std::endl;

    // Test case 6: Large numbers
    assert(findGCD(1024, 2048) == 1024);
    std::cout << "Test 6 passed: GCD(1024, 2048) = 1024" << std::endl;
}

int main() {
    runTests();
    return 0;
}
