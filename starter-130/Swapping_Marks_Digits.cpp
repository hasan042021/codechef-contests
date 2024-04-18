#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int rev_a = (a % 10) * 10 + (a / 10);
        int rev_b = (b % 10) * 10 + (b / 10);

        int f_a = max(a, rev_a);
        int f_b = min(b, rev_b);
        if (f_a > f_b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}