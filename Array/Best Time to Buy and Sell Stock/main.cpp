#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int minP = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - minP;
            if (profit > 0) {
                // we can sell
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            } else {
                minP = prices[i];
            }
        }
        return maxProfit;
    }
};

int main() {
    // vector<int> prices = {7, 1, 5, 3, 6, 4};
    // vector<int> prices = {7, 6, 4, 3, 1};
    vector<int> prices = {2, 4, 1};

    Solution solution;

    const int profit = solution.maxProfit(prices);
    cout << "profit: " << profit << endl;
    return 0;
}
