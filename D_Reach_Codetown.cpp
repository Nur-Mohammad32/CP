#include <bits/stdc++.h>
using namespace std;

#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define yes_no cout << (ok ? "YES" : "NO") << "\n"

bool check(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    else
        return false;
}

void Nur_Md()
{
    string s;
    cin >> s;
    string s1 = "CODETOWN";

    bool ok = true;

    for (int i = 0; i < 8; i++)
    {
        bool a = check(s[i]);
        bool b = check(s1[i]);

        if (a != b)
        {
            ok = false;
            break;
        }
    }

    yes_no;
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        Nur_Md();
    }
    return 0;
}
