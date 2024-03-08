#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mn = 0;
        mn = n / 2;

        if (n % 2 == 1)
        {
            mn++;
        }
        cout << mn << " " << n << endl;
    }
    return 0;
}