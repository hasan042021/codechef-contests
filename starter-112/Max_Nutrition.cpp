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

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int type = a[i];
            int nutr = b[i];
            if (mp.find(type) == mp.end())
            {
                mp[type] = nutr;
            }
            else if (mp.find(type) != mp.end())
            {
                if (mp[type] < nutr)
                {
                    mp[type] = nutr;
                }
            }
        }
        int sum = 0;
        for (auto i : mp)
        {
            if (i.second > 0)
                sum += i.second;
        }
        cout << sum << endl;
    }
    return 0;
}