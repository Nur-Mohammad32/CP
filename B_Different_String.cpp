#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        bool same = true;

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[0])
            {
                swap(s[i], s[0]);
                same = false;
                break;
            }
        }

        if (same)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }

    return 0;
}
