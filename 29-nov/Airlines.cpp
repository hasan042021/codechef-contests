#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        if (x * 100 >= n)
            cout << 0 << endl;
        else
        {
            int a = x * 100;
            int r = n - (x * 100);
            int b = r / 100;
            if (r % 100 != 0)
                b++;
            cout << b << endl;
        }
    }
    return 0;
}