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
        if (n != 1 && n != 2 && n != 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}