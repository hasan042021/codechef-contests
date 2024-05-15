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
        int n;
        cin >> n;
        int a[n];
        int i;
        forI(i, 0, n) cin >> a[i];
        sort(a, a + n);
        int mid = n / 2;
        i = 0;
        int sum_e = 0, sum_o = 0;
        forI(i, 0, mid) sum_e += a[i];
        i = 0;
        forI(i, mid, n) sum_o += a[i];
        cout << abs(sum_e - sum_o) << endl;
    }
    return 0;
}