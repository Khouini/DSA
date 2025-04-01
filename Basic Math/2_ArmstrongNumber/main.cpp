#include <iostream>
#include <valarray>


bool isArmstrongNumber(const int number) {
    const int l = std::to_string(number).length();
    int n= number;
    double sum = 0;
    while (n > 0) {
        sum += std::pow(n % 10, l);
        n = n / 10;
    }

    if (sum == number) {
        return true;
    }
    return false;
}

int main() {
    std::cout << "isArmstrongNumber:" << isArmstrongNumber(153) << std::endl;
}
