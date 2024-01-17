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
        int tot = 0;
        int f = c / 3;
        if (b > f)
        {
            tot += f;
            b -= f;
            tot += (b / 2);
        }
        else if (b == f)
        {
            tot += f;
        }
        else if (b < f)
        {
            tot += b;
        }
        if (tot >= a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}