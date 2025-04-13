#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSum = INT_MIN;
//
//         for (int i = 0; i<nums.size();i++) {
//             int sum = 0;
//             for (int j = i; j<nums.size(); j++) {
//                 int value = nums[j];
//                 sum = sum + value;
//                 if(sum > maxSum) {
//                     maxSum = sum;
//                 }
//             }
//         }
//
//         return maxSum;
//     }
// };

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int sum = currentSum + nums[i];
            if (sum < nums[i]) {
                // the added number drops the sum, so we drop the subarray and start a fresh one
                currentSum = nums[i];
            } else {
                // we kepp the subarray
                currentSum = sum;
            }
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    // vector<int> nums = {-2, 1};
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> nums = {-1};
    int maxSum = sol.maxSubArray(nums);
    cout << "maxSum: " << maxSum << endl;
    return 0;
}
