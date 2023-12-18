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
        int sum = 0;
        int o_n = 0, e_n = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
            if (a % 2 == 1)
                o_n++;
            else
                e_n++;
        }
        if (e_n && o_n)
            cout << "No" << endl;
        else
        {
            int q = sum / n;
            // cout << q << " ";
            if (q % 2 == 1)
                cout << "No" << endl;
            else if (q % 2 == 0)
            {
                if (sum % n == 0)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
        }
    }
    return 0;
}