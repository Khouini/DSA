#include <bits/stdc++.h>
using namespace std;

vector<int> printAllDivisors(int n)
{
    cout << "n: " << n << endl;
    vector<int> factors;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            if (i != sqrt(n))
            {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}
int main()
{
    for (auto it : printAllDivisors(36))
    {
        cout << it << ", ";
    }
    return 0;
}