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
        string s;
        cin >> s;
        if (n == 1)
            cout << 0 << endl;
        else
        {
            int cnt = 0, i;
            forI(i, 1, n)
            {
                if (s[i] == s[i - 1])
                    cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}