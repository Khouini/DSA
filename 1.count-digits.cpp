#include <bits/stdc++.h>
#include <stdexcept> // Include the necessary header for exceptions
using namespace std;
int countDigits(int inputN)
{
    if (inputN == 0)
    {
        throw runtime_error("n is 0");
    }
    int count = 0;
    int n = inputN;
    while (n > 0)
    {

        int firstDigit = n % 10;
        cout << "checking if " << firstDigit << " divide " << inputN << " ?" << endl;
        if (firstDigit != 0)
        {
            int forCheck = inputN % firstDigit;
            cout << "forcheck " << forCheck << endl;
            if (forCheck == 0)
            {
                cout << firstDigit << " divide " << inputN << endl;
                count++;
                cout << "count: " << count << endl;
            }
            else
            {
                cout << firstDigit << " don't divide " << inputN << endl;
            }
        }
        n = n / 10;
    }
    cout << "result: ";
    return count;
}

int main()
{
    try
    {
        std::cout << countDigits(300) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}