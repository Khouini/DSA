#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors1(int n)
{
    int result = 0;
    for (int digit = 1; digit <= n; digit++)
    {
        for (int i = 1; i <= digit; i++)
        {
            if (digit % i == 0)
            {
                result = result + i;
            }
        }
    }

    return result;
}
int sumOfAllDivisors2(int n)
{
    int result = 0;
    for (int digit = 1; digit <= n; digit++)
    {
        result = result + (n / digit) * digit;
    }

    return result;
}
// Let n = 6,
// => F(1) + F(2) + F(3) + F(4) + F(5) + F(6)
// => 1 will occurs 6 times in F(1), F(2),
//    F(3), F(4), F(5) and F(6)
// => 2 will occurs 3 times in F(2), F(4) and
//    F(6)
// => 3 will occur 2 times in F(3) and F(6)
// => 4 will occur 1 times in F(4)
// => 5 will occur 1 times in F(5)
// => 6 will occur 1 times in F(6)
// From the above observation, it can easily be observed that number i is occurring only in their multiples less than or equal to n. Thus, we just need to find the count of multiples and then multiply it with i for full contribution in the final sum. It can easily be done in O(1) time by taking the floor of (n / i) and then multiply it with i for the sum.
int main()
{
    cout << sumOfAllDivisors2(5) << endl;
    return 0;
}