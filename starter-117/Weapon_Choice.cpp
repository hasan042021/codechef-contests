#include <iostream>
#include <cmath>
using namespace std;

int xxxx(int ff, int ii)
{
    return ceil((double)ff / ii);
}

int cal(int ff, int oo, int pp, int ww)
{
    if (ww >= ceil((double)ff / oo))
    {
        return ceil((double)ff / oo);
    }
    else
    {
        return ww + ceil((double)(ff - ww * oo) / pp);
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int ff, ii, oo, pp, ww;
        cin >> ff >> ii >> oo >> pp >> ww;
        int hh = xxxx(ff, ii);
        int llllll = cal(ff, oo, pp, ww);
        int sssss = min(hh, llllll);
        cout << sssss << endl;
    }
    return 0;
}