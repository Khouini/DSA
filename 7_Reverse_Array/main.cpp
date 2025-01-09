//
// Created by khoui on 1/9/2025.
//

#include "main.h"

int* subArrayMethod(const int size, const int* inputArray) {
    int* resultArray = new int[size];

    for (int i = size -1 ; i>=0; i--) {
        resultArray[size - i - 1] = inputArray[i];
    }
    return resultArray;
}

int main() {
    constexpr int inputArray[] = {1, 2, 3, 4};
    constexpr int size = 4;
    const int *resultArray = subArrayMethod(size, inputArray);

    // Print the result array
    for (int i = 0; i < size; ++i) {
        std::cout << resultArray[i] << " "; // Output the result
    }

    delete[] resultArray; // Free the dynamically allocated memory
    return 0;
}
