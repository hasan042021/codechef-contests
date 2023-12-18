#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x == 0)
            cout << 0 << endl;
        else
        {
            int u = 2 * n - x;
            if (u >= x)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << x - u << endl;
            }
        }
    }
    return 0;
}