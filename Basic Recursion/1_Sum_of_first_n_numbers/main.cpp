//
// Created by khoui on 12/30/2024.
//

#include "main.h"

int TailRecursiveWay(int i, int sum) {
    if (i < 1) {
        return sum;
    }
    sum = sum + i;
    i = i - 1;
    return TailRecursiveWay(i, sum);
}

int NonTailRecursiveWay(const int i) {
    if (i < 1) {
        return 0;
    }
    return i + NonTailRecursiveWay(i - 1);
}

int main() {
    cout << TailRecursiveWay(3, 0);
    cout << endl;
    cout << NonTailRecursiveWay(3);
    return 0;
}
