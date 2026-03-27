#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int mn1 = min(a, b);
        int mx1 = max(a, b);

        int mn2 = min(c - a, d - b);
        int mx2 = max(c - a, d - b);

        bool flag1 = true;
        bool flag2 = true;

        if (mx1 > (2 * mn1 + 2))
        {
            flag1 = false;
        }
        if (mx2 > (2 * mn2 + 2))
        {
            flag2 = false;
        }

        if (flag1 && flag2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
