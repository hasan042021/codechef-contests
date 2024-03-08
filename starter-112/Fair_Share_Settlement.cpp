#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        double share = a / (b + 1);
        share = floor(share);
        int tot = share * b;
        cout << a - tot << endl;
    }
    return 0;
}