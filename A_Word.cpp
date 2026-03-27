#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int l = s.length();

    int cu = 0;
    int cl = 0;
    for (int i = 0; i < l; i++)
    {
        if (int(s[i]) >= 65 && int(s[i]) <= 90)
        {
            cu++;
        }
        else
        {
            cl++;
        }
    }
    // cout << cu << " " << cl;

    for (int i = 0; i < l; i++)
    {
        if ((cu > cl) && (int(s[i]) >= 97 && int(s[i]) <= 122))
        {
            s[i] = s[i] - 32;
        }
        else if ((cu < cl) && (int(s[i]) >= 65 && int(s[i]) <= 90))
        {
            s[i] = s[i] + 32;
        }
        else if ((cu == cl) && (int(s[i]) >= 65 && int(s[i]) <= 90))
        {
            s[i] = s[i] + 32;
        }
    }
    cout << s;

    return 0;
}
