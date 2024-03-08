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
        string ans = "";
        int win = (n / 2) + 1;
        int score = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                ans += 'P';
                score++;
                continue;
            }
            if ((win - score) <= (n - (i + 1)))
            {
                ans += 'P';
            }
            else
            {
                if (s[i] == 'P')
                    ans += 'S';
                else if (s[i] == 'S')
                    ans += 'R';
            }
        }
        cout << ans << endl;
    }
    return 0;
}