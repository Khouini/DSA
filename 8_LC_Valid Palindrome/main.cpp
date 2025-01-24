//
// Created by khoui on 1/24/2025.
//

#include "main.h"

#include <iostream>

int cleanString(char *inputString) {
    int writeIndex = 0, count = 0;

    for (int readIndex = 0; inputString[readIndex] != '\0'; ++readIndex) {
        if (std::isalnum(inputString[readIndex])) {
            // Check if alphanumeric
            inputString[writeIndex++] = std::tolower(inputString[readIndex]); // Convert to lowercase
            count++;
        }
    }

    inputString[writeIndex] = '\0'; // Null-terminate
    return count;
}

// iterative way
bool iterativeWay(char *inputString, const int size) {
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

bool recursiveWay(char *inputString, const int leftP, const int rightP) {
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
    char inputString[] = "A man, a plan, a canal: Panama";
    const int length = cleanString(inputString);
    // bool valid = iterativeWay(inputString, length);
    const bool valid = recursiveWay(inputString, 0, length - 1);
    std::cout << "valid: " << valid;
    return 0;
}
