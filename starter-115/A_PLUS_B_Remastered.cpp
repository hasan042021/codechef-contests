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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a, a + n);
        sort(b, b + n, greater<int>());
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int r = a[i] + b[i];
            mp[r]++;
        }
        if (mp.size() > 1)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << endl;
        }
    }
    return 0;
}