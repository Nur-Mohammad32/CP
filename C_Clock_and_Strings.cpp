#include <bits/stdc++.h>
using namespace std;

bool nur(int a, int b, int x)
{
    while (a != b)
    {
        if (a == x)
            return true;
        a = (a % 12) + 1;
    }
    return (b == x);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool p = nur(a, b, c);
        bool q = nur(a, b, d);

        if ((p && !q) || (!p && q))
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
