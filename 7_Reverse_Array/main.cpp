//
// Created by khoui on 1/9/2025.
//

#include "main.h"

void displayArray(const int *array, const int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl; // Add a newline for better readability
}


int *subArrayMethod(const int size, const int *inputArray) {
    int *resultArray = new int[size];

    for (int i = size - 1; i >= 0; i--) {
        resultArray[size - i - 1] = inputArray[i];
    }
    return resultArray;
}

const int *optimisedMethod1(const int size, int *inputArray) {
    for (int i = 0; i < size / 2; i++) {
        int *p1 = &inputArray[i];
        int *p2 = &inputArray[size - i - 1];
        const int temp = *p2;

        // swapping
        *p2 = *p1;
        *p1 = temp;
    }
    return inputArray;
}

const int *optimisedMethod2(const int size, int *inputArray) {
    for (int i = 0; i < size / 2; i++) {
        ranges::swap(inputArray[i], inputArray[size - i - 1]);
    }
    return inputArray;
}

const int *recursiveWay(int *inputArray, const int leftP, const int rightP) {
    if (rightP < leftP) {
        return inputArray;
    }
    ranges::swap(inputArray[leftP], inputArray[rightP]);
    return recursiveWay(inputArray, leftP + 1, rightP - 1);
}


int main() {
    int inputArray[] = {1, 2, 3, 4};
    constexpr int size = 4;
    // const int *resultArray = subArrayMethod(size, inputArray);
    // const int *resultArray = optimisedMethod2(size, inputArray);
    const int *resultArray = recursiveWay(inputArray, 0, size - 1);
    // Print the result array
    displayArray(resultArray, size);

    // delete[] resultArray; // Free the dynamically allocated memory
    return 0;
}
