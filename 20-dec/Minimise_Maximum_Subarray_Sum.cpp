#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mx = 1;
        int r = (a * 1) - (b * (2));
        mx = max(mx, r);
        cout << mx << endl;
    }
    return 0;
}