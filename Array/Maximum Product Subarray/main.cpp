#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int maxProduct = INT_MIN;
        // loop over prefix
        int sumPrefix = 1;
        int sumSuffix = 1;
        for (int i = 0; i < nums.size(); i++) {
            sumPrefix = sumPrefix * nums[i];
            sumSuffix = sumSuffix*nums[nums.size() - i - 1];
            maxProduct = max({maxProduct, sumPrefix, sumSuffix});
            if (sumPrefix == 0) {
                sumPrefix = 1;
            }
            if (sumSuffix == 0) {
                sumSuffix = 1;
            }
        }

        return maxProduct;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2,0,-1};
    int maxProduct = sol.maxProduct(nums);
    cout << "maxProduct: " << maxProduct << endl;
    return 0;
}
