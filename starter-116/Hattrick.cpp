#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> a[i];
        }
        int mx = INT_MIN;
        int cnt = 0;
        for (int i = 0; i < 6; i++)
        {
            if (a[i] == 'W')
            {
                cnt++;
            }
            else
            {
                mx = max(mx, cnt);
                cnt = 0;
            }
        }
        mx = max(cnt, mx);

        if (mx >= 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}