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

    std::sort(divisors.begin(), divisors.end()); // O(n log(n))
    return divisors;
}

int main() {
    const std::pmr::vector<int> result = getAllDivisors(9);
    for (const auto it : result) {
        std::cout << it << std::endl;
    }
    return 0;
}
