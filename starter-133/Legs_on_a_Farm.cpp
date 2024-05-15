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
        int n;
        cin >> n;
        int tot = 0;
        tot = n / 4;
        int rem = n % 4;
        tot += rem / 2;
        cout << tot << endl;
    }
    return 0;
}