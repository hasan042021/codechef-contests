#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int g, b;
        cin >> g >> b;

        if (b == 0)
        {
            for (int i = 1; i <= g; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }

        if (g - b <= 1)
        {
            cout << -1 << endl;
            continue;
        }
        int a = g - 1 - b;
        b = g + 1 - a;

        cout << b << " ";
        int h = 1;
        for (int j = 1; j < g; j++)
        {
            if (j == b)
            {
                h += 1;
            }
            cout << h << " ";
            h += 1;
        }
        cout << endl;
    }

    return 0;
}