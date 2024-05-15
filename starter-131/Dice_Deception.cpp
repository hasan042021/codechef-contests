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
        ll n, k;
        cin >> n >> k;
        ll i, a[n];
        forI(i, 0, n) cin >> a[i];
        sort(a, a + n);
        i = 0;
        ll sum = 0;
        forI(i, 0, k)
        {
            if (a[i] < 4)
                sum += abs(7 - a[i]);
            else
                sum += a[i];
        }
        i = 0;
        forI(i, k, n) sum += a[i];
        cout << sum << endl;
    }
    return 0;
}