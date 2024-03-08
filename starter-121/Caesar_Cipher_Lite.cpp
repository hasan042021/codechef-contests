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
        string a, b;
        cin >> a >> b;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                int s = 0;
                s += 'Z' - a[i];
                s += b[i] - 'A';
                if (s % 3 == 0)
                {
                    ans.push_back(s);
                    continue;
                }
                while (true)
                {
                    s += 26;
                    if (s % 3 == 0)
                    {
                        ans.push_back(s);
                        break;
                    }
                }
            }
            else if (a[i] == b[i])
                ans.push_back(0);
            else
            {
            }
        }
    }
    return 0;
}