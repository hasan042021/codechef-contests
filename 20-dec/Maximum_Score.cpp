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
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 0)
                z++;
            else
                o++;
        }
        cout << min(z, o) << endl;
    }
    return 0;
}