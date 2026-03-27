#include <bits/stdc++.h>
using namespace std;

bool nur(char c)
{
    return c == 'a' || c == 'e';
}

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
        string s1;
        int i = 0;
        while (i < n)
        {
            s1 += s[i];     
            s1 += s[i + 1];

            if (i + 3 < n && !nur(s[i + 2]) && nur(s[i + 3]))
                i += 2;
            else if (i + 2 < n && !nur(s[i + 2]))
            {
                s1 += s[i + 2];
                i += 3;
            }
            else
                i += 2;

            if (i < n)
                s1 += '.';
        }
        cout << s1 << endl;
    }
}
