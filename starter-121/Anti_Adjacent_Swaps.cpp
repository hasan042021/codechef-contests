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
        if (n == 1)
            cout << "YES" << endl;
        if (n == 2)
        {
            if (a[0] <= a[1])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        if (n == 3)
        {
            if ((a[1] < min(a[0], a[2])) || (a[1] > max(a[2], a[0])))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        if (n > 3)
            cout << "YES" << endl;
    }
    return 0;
}