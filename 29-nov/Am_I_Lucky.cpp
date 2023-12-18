#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int g = n - x;
        int rb = x % k;
        int rg = g % k;
        cout << abs(rb - rg) << endl;
    }
    return 0;
}