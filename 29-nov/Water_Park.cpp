#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 60, b = 130;
    int w, h;
    cin >> w >> h;
    if (a <= w && b >= h)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}