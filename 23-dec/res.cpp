#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = 'P';
        }
        int score = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'P' && s[i] == 'R')
                score++;
        }
        if (score <= n / 2 + 1)
        {
            int cnt;
            cnt = (n / 2) + 1 - score;
            for (int i = n - 1; i >= 0; i--)
            {
                if (cnt > 0)
                {
                    if (s[i] == 'P')
                    {
                        a[i] = 'S';
                        cnt--;
                    }
                    else if (s[i] == 'S')
                    {
                        a[i] = 'R';
                        cnt--;
                    }
                }
            }
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}