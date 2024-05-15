#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i++)

const int N = 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i;
        ll a[n];
        forI(i, 0, n) cin >> a[i];
        sort(a, a + n);

        ll sum = a[0];
        forI(i, 1, n)
        {
            if (sum * a[i] >= sum + a[i])
            {
                sum *= a[i];
                sum %= N;
            }
            else
            {
                sum += a[i];
                sum %= N;
            }
        }
        cout << sum << endl;
    }
    return 0;
}