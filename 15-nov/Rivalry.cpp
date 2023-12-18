#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r1, r2, d1, d2;

    cin >> r1 >> r2 >> d1 >> d2;

    int xx = r1 + d1;
    int yy = r2 + d2;

    if (xx > yy)
    {
        cout << "Dominater" << endl;
    }
    else
    {
        cout << "Everule" << endl;
    }

    return 0;
}