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
        int w = a * b;
        int r = c / (w * 2);
        cout << r << endl;
    }
    return 0;
}