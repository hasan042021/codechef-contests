#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i += 2)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        vector<int> v;
        forI(i, 1, n)
        {
            if (s[i] != s[i - 1])
            {
                cnt++;
                v.push_back(i + 1);
            }
        }
        cout << cnt << endl;
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}