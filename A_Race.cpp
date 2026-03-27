#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;

        bool flag = false;

        if (a < x && a < y)
        {
            flag = true;
        }
        else if(a>x && a>y)
        {
            flag = true;
        }
        if(flag)
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
