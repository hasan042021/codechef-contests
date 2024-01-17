#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll cnt = sqrtl(n);

        if (n % 2 == 1)
        {
            cnt++;
        }

        cout << cnt / 2 << endl;
    }

    return 0;
}