#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        s = this->convertToLowerCaseAndRemoveNonAlphanumeric(s);
        return this->isPalindromeHelper(0, s.length(), s);
    }
    bool isPalindromeHelper(int i, int n, string &s)
    {
        if (i >= n / 2)
        {
            return true;
        }
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
        return isPalindromeHelper(i + 1, n, s);
    }
    string convertToLowerCaseAndRemoveNonAlphanumeric(const string &input)
    {
        string result;
        for (char c : input)
        {
            if (isalnum(c))
            {
                result += tolower(c);
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    cout << sol.isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}
