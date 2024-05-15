#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll a[n];
        int i;
        forI(i, 0, n) cin >> a[i];
        i = 0;
        ll sum = 0;
        forI(i, 0, n)
        {
            sum += min(a[i] * x, y);
        }
        cout << sum << endl;
    }
    return 0;
}