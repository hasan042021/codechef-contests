#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = a / (b * 5);
        cout << d + c << endl;
    }
    return 0;
}