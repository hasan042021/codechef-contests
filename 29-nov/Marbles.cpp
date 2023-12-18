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
        if (a % b == 0)
            cout << 0 << endl;
        else
        {
            if (b > a)
            {
                int tmpa = a;
                int tmpb = b;
                int step = 0;
                while (tmpb >= 1)
                {
                    tmpb--;
                    tmpa++;
                    step++;
                    if (tmpa % tmpb == 0)
                        break;
                }
                cout << step << endl;
            }
            else
            {
                int tmpa = a;
                int tmpb = b;
                int step_f = 0;
                while (tmpb >= 1)
                {
                    tmpb--;
                    tmpa++;
                    step_f++;
                    if (tmpa % tmpb == 0)
                        break;
                }
                int step_b = 0;
                tmpa = a;
                tmpb = b;
                bool ok = false;
                while (tmpa >= tmpb)
                {
                    tmpa--;
                    tmpb++;
                    step_b++;
                    if (tmpa % tmpb == 0)
                    {
                        ok = true;
                        break;
                    }
                }
                if (!ok)
                    cout << step_f << endl;
                else
                {
                    cout << min(step_f, step_b) << endl;
                }
            }
        }
    }
    return 0;
}