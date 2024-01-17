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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1 || n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            int i_o, i_t;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 1)
                    i_o = i;
                if (a[i] == 3)
                    i_t = i;
            }
            swap(a[i_o], a[i_t]);
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}