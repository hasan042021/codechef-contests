#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pii> v(n);
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            a[i]--;
            v[a[i]].first = i - v[a[i]].first;
            v[a[i]].second = a[i];
        }
        sort(v.begin(), v.end());
        for (auto a : v)
            cout << a.second + 1 << " ";
        cout << endl;
    }

    return 0;
}