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
        if (n % 3 == 0 || n % 3 == 1)
        {
            int i;
            forI(i, 0, n)
            {
                if (((i + 1) % 3) == 1)
                    cout << i + 1 << " ";
                else if (((i + 1) % 3) == 2)
                    cout << i + 2 << " ";
                else
                    cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}