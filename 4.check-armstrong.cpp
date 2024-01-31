#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    int copyN = n;
    int digitCount = 0;
    while (n != 0)
    {
        digitCount++;
        n = n / 10;
    }
    n = copyN;
    long armtrongCalculation = 0;
    while (n != 0)
    {
        armtrongCalculation = armtrongCalculation + pow(n % 10, digitCount);
        n = n / 10;
    }

    return (armtrongCalculation == copyN);
}

int main()
{
    // cout << checkArmstrong(371) << endl;
    cout << checkArmstrong(1634) << endl;
    return 0;
}