#include <bits/stdc++.h>
using namespace std;

int calcGCD(int n, int m)
{
    vector<int> factors;
    int lowestNumber = (n > m ? m : n);
    for (int i = 1; i <= (lowestNumber); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            factors.push_back(i);
        }
    }
    sort(factors.begin(), factors.end(), greater<int>());
    return (factors.at(0));
}

int main()
{
    cout << calcGCD(9, 6) << endl;
    return 0;
}