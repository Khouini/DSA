#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(23);
    v1.push_back(26);

    cout << "vector elements 1" << endl;

    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << ", ";
    }

    cout << endl
         << "vector elements 1 end" << endl;

    cout << "vector elements 2" << endl;

    for (auto it : v1)
    {
        cout << it << ", ";
    }

    cout << endl
         << "vector elements 1 end" << endl;

    cout << v1.front() << endl;

    auto itToDelete = v1.end();
    v1.erase(itToDelete);
    cout << v1.back() << endl;
    v1.pop_back();
    cout << v1.back() - 1 << endl;
}