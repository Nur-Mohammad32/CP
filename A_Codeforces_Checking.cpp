#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        string s = "codeforces";

        bool flag = false;
        for (char x : s)
        {
            if (x == c)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
