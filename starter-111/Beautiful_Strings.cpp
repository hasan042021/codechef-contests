
#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int freq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        long ans = 1;

        for (int i = 0; i < 26; i++)
        {
            ans = (ans * (freq[i] + 1)) % N;
        }

        cout << (ans - 1) << endl;
    }

    return 0;
}