#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int j = 1;
        int sum = 1;
        for (int i = 2; i <= 7; i++)
        {
            j *= 2;
            sum += j;
        }
        int val;
        cin >> val;
        if (val >= sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}