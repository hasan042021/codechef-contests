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
        if (n == 1)
            cout << "1 1" << endl;
        else
        {
            cout << ceil(n / 2.0) << " " << ceil(n / 3.0) << endl;
        }
    }
    return 0;
}