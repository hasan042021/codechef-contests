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
        int z_cnt = 0, o_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                o_cnt++;
                if (i == n - 1)
                {
                    if (z_cnt > 0)
                        cout << "NO" << endl;
                    else
                        cout << "YES" << endl;
                }
                else
                {
                    if (z_cnt > 0)
                        cout << "NO" << endl;
                    else
                        cout << "IDK" << endl;
                }
            }
            else
            {
                z_cnt++;
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}