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
        if (a > b)
            cout << a + (a - 1) << endl;
        else
            cout << b + (b - 1) << endl;
    }
    return 0;
}