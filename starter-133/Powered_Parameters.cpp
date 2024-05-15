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
        ll n;
        cin >> n;
        ll a[n];
        int i;
        forI(i, 0, n) cin >> a[i];
        map<ll, vector<ll>> mp;
        i = 0;
        forI(i, 0, n)
        {
            if (a[i] == 1)
                continue;

            vector<ll> powers;
            ll tmp = a[i];
            powers.push_back(1);

            while (tmp <= 1e10)
            {
                powers.push_back(tmp);
                tmp *= a[i];
            }
            mp[a[i]] = powers;
        }
        ll cnt = 0;
        i = 0;
        forI(i, 0, n)
        {
            if (a[i] == 1)
            {
                cnt += n;
                continue;
            }
            int j;
            forI(j, 1, mp[a[i]].size())
            {
                if ((j - 1 < n) && mp[a[i]][j] <= a[j - 1])
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}