//
// Created by khoui on 1/24/2025.
//

#include "main.h"

#include <iostream>

// iterative way
bool validPalindrome1(const char *inputString, const int size) {
    for (int i = 0; i < size / 2; i++) {
        const int leftP = i;
        const int rightP = size - i - 1;
        const int leftValue = inputString[leftP];
        const int rightValue = inputString[rightP];
        if (leftValue != rightValue) {
            return false;
        }
    }
    return true;
}

int main() {
    constexpr char inputString[] = "3223";
    bool valid = validPalindrome1(inputString, 4);
    std::cout << "valid: " << valid;
    return 0;
}
