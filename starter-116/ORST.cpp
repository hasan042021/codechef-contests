#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int mx = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mx = max(mx, b[i]);
        }
        int start = n - mx;
        sort(a + start, a + n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}