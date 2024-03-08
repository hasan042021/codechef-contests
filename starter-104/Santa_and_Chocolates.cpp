#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        // cout << sum << endl;
        if (sum < n)
            cout << "NO" << endl;
        else
        {
            int r = sum % n;
            cout << r << endl;
            if (r > k)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}