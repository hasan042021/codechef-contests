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
        int a[n], i;
        forI(i, 0, n) cin >> a[i];
        int fst = a[0], lst = a[n - 1];
        if (fst != lst)
            cout << "NO" << endl;
        else if (fst == lst)
        {
            i = 0;
            int mn = INT_MAX;
            forI(i, 1, n - 1) mn = min(mn, a[i]);
            if (mn < fst)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}