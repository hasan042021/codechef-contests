#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h;
        cin >> h;
        int cnt = 0, p = 1;
        bool used = false;
        while (h > 0)
        {
            cnt++;
            if (isPrime(h) && !used)
            {
                used = true;
                h -= h;
            }
            else
            {
                h -= p;
                p *= 2;
            }
        }
        if (h == 0)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}