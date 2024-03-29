#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution1
{
public:
    int reverse(int x)
    {
        cout << INT_MIN << endl;
        if ((x >= INT_MAX || x <= INT_MIN))
        {
            return 0;
        }
        if (x == 0)
        {
            return 0;
        }
        bool isNegative = false;
        if (x < 0)
        {
            isNegative = true;
            x = -x;
        }
        string rs;
        while (x > 0)
        {
            rs = rs + to_string(x % 10);
            x = x / 10;
        }
        try
        {
            return isNegative ? -(std::stoi(rs)) : std::stoi(rs);
        }
        catch (const std::out_of_range &e)
        {
            return 0;
        }
    }
};

class Solution2
{
public:
    int reverse(int x)
    {
        long r = 0; // decleare r
        while (x)
        {
            cout << "r bofore: " << r << endl;
            r = r * 10 + x % 10; // find remainder and add its to r
            cout << "r after: " << r << endl;
            x = x / 10; // Update the value of x
        }
        if (r > INT_MAX || r < INT_MIN)
            return 0;  // check range if r is outside the range then return 0
        return int(r); // if r in the 32 bit range then return r
    }
};

int main()
{
    Solution2 sol;
    cout << sol.reverse(1234) << endl;
    return 0;
}
