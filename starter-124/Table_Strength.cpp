#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        ll mx = INT_MIN, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
        sort(a, a + n);
        ll res = mx;
        for (int i = 0; i < n; i++)
        {
            res = max((a[i] * (n - i)), res);
        }
        cout << res << endl;
    }
    return 0;
}