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
        int cnt = 0;
        while (n > 0)
        {
            cnt += n & 1;
            n >>= 1;
        }
        if (cnt & 1 == 1)
            cout << "ODD" << endl;
        else
            cout << "EVEN" << endl;
    }
    return 0;
}