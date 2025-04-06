#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> track;
        for (int num : nums) {
            if (track.contains(num)) { //o(1)
                return true;
            }
            track.insert(num); // o(1)
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};
    bool result = solution.containsDuplicate(nums);
    cout << "result " << result << endl;
    return 0;
}