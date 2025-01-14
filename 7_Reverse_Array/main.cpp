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

const int* optimisedMethod1(const int size, int* inputArray) {
    for (int i = 0 ; i<size / 2; i++) {
        int* p1 = &inputArray[i];
        int* p2 = &inputArray[size - i - 1];
        const int temp = *p2;

        // swapping
        *p2 = *p1;
        *p1 = temp;
    }
    return inputArray;
}

const int* optimisedMethod2(const int size, int* inputArray) {
    for (int i = 0; i < size / 2; i++) {
        std::swap(inputArray[i], inputArray[size - i - 1]);
    }
    return inputArray;
}

int main() {
    int inputArray[] = {1, 2, 3, 4};
    constexpr int size = 4;
    // const int *resultArray = subArrayMethod(size, inputArray);
    const int *resultArray = optimisedMethod2(size, inputArray);
    // Print the result array
    for (int i = 0; i < size; ++i) {
        std::cout << resultArray[i] << " "; // Output the result
    }

    // delete[] resultArray; // Free the dynamically allocated memory
    return 0;
}
