#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int minimumSum(int x, int y, int k)
{
    int sum = x + y;
    if (x == y)
        return x + y;

    for (int i = 0; i < k; i++)
    {
        int a = gcd(x, y);
        if (x > y)
            x = a;
        else
            y = a;
        int b = lcm(x, y);
        if (x > y)
            x = b;
        else
            y = b;
        sum = min(sum, x + y);
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int mn = minimumSum(x, y, k);

        cout << mn << endl;
    }

    return 0;
}