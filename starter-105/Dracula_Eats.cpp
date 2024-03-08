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
        int res = 0;
        int i = 2;
        while (i <= n)
        {
            res++;
            i += 7;
        }
        cout << res << endl;
    }
    return 0;
}