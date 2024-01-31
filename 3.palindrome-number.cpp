#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int xCopy = x;
        long inversed = 0;
        while (x > 0)
        {
            inversed = inversed * 10 + x % 10;
            x = x / 10;
        }
        if (inversed == xCopy)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    cout << sol.isPalindrome(1234567899);
    return 0;
}
