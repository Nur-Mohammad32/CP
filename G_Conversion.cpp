#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        int a = int(s[i]);
        if (s[i] == ',')
        {
            s[i] = ' ';
        }

        if (a >= 65 && a <= 90)
        {
            a = a + 32;
            s[i] = char(a);
        }
        else if (a >= 97 && a <= 122)
        {
            a = a - 32;
            s[i] = char(a);
        }
    }

    cout << s;

    return 0;
}
