#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int t_f = a * b;
        int t_r = c * 24 * 60;
        if (t_f <= t_r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}