#include <iostream>
#include <valarray>
#include <vector>


std::pmr::vector<int> getAllDivisors(int n) {
    std::pmr::vector<int> divisors;
    for (int i = 1; i < std::sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            divisors.push_back(n / i);
        }
    }

    return divisors;
}

int main() {
    const std::pmr::vector<int> result = getAllDivisors(36);
    for (int i = 0 ; i < result.size();i++) {
        std::cout << result[i] << std::endl;
    }
    return 0;
}
