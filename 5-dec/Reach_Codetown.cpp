#include <bits/stdc++.h>
using namespace std;
bool isConsonant(char ch)
{
    ch = tolower(ch);
    return isalpha(ch) && !strchr("aeiou", ch);
}

bool isVowel(char ch)
{
    ch = tolower(ch);
    return isalpha(ch) && strchr("aeiou", ch);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool ok = true;

        for (int i = 0; i < s.length(); i++)
        {
            if ((i == 1 || i == 3 || i == 5) && !isVowel(s[i]))
            {
                ok = false;
                break;
            }
            else if ((i != 1 && i != 3 && i != 5) && !isConsonant(s[i]))
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}