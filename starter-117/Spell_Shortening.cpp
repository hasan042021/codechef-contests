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
        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (cnt == 0 && s[i] > s[i + 1])
            {
                cnt++;
                continue;
            }
            cout << s[i];
        }
        if (cnt != 0)
        {
            cout << s[n - 1];
        }
        cout << endl;
    }
    return 0;
}