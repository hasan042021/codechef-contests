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
        int n, k;
        cin >> n >> k;
        int i, a[n];
        forI(i, 0, n) cin >> a[i];
        forI(i, 0, n) { a[i] %= k; }
        sort(a, a + n);
        int res = a[n - 1] - a[0];
        forI(i, 0, n - 1) res = min(res, (a[i] + k - a[i + 1]));

        cout << res << endl;
    }
    return 0;
}