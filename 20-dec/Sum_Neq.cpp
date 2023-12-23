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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 4)
        {
            if ((a[0] + a[1]) != (a[2] + a[3]))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;

            continue;
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int cnt = 0;
        for (auto e : mp)
        {
            if (e.second >= 1)
                cnt++;
        }
        if (cnt == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}