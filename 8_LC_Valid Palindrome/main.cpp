//
// Created by khoui on 1/24/2025.
//

#include "main.h"

#include <iostream>

// iterative way
bool iterativeWay(const char *inputString, const int size) {
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

bool recursiveWay(const char *inputString, const int leftP, const int rightP) {
    if (rightP < leftP) {
        return true;
    }
    const int leftValue = inputString[leftP];
    const int rightValue = inputString[rightP];
    if (leftValue != rightValue) {
        return false;
    }
    return recursiveWay(inputString, leftP + 1, rightP - 1);
}

int main() {
    constexpr char inputString[] = "3223";
    // bool valid = iterativeWay(inputString, 4);
    bool valid = recursiveWay(inputString, 0, 3);
    std::cout << "valid: " << valid;
    return 0;
}
