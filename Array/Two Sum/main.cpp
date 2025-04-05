#include <iostream>
#include <vector>
#include <map>
using namespace std;
// class Solution {
// public:
//     std::vector<int> twoSum(std::vector<int>& nums, int target) {
//         for (int i = 0; i<nums.size(); i++) {
//             for (int j = 0; j<nums.size(); j++) {
//                 if (i == j) {
//                     continue;
//                 }
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// class Solution {
// public:
//     std::vector<int> twoSum(std::vector<int> &nums, int target) {
//         for (int i = 0; i < nums.size(); i++) {
//             int calculatedTarget = target - nums[i];
//             for (int j = 0; j < nums.size(); j++) {
//                 if (i == j) {
//                     continue;
//                 }
//                 if (calculatedTarget == nums[j]) { // for and find (can be replaced by map for o(1) complexity
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };
class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        map<int, int> numsIndexes;
        // for (int i = 0; i < nums.size(); i++) {
        //     numsIndexes[nums[i]] = i;
        // }
        for (int i = 0; i < nums.size(); i++) {
            int calculatedTarget = target - nums[i];
            if (numsIndexes.contains(calculatedTarget)) {
                int j = numsIndexes[calculatedTarget];
                if (i == j) {
                    continue;
                }
                return {j, i};
            }
            numsIndexes[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {3, 2, 4};
    int target = 6;

    std::vector<int> result = solution.twoSum(nums, target);

    // Print the result
    for (int i: result) {
        std::cout << i << " ";
    }

    return 0;
}
