#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        int cnt = 0;
        bool ok = true;
        for (char c : s)
        {
            if (c == '0')
            {
                cnt--;
                if (cnt < 0)
                {
                    ok = false;
                }
            }
            else if (c == '1')
            {
                cnt = x;
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
