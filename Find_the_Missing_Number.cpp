#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int reslt = (a * b * c);

        if (m != 0 && reslt > m)
        {
            cout << -1 << endl;
        }
        else if (m % reslt != 0)
        {
            cout << -1 << endl;
        }
        else if (m == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << m / reslt << endl;
        }
    }

    return 0;
}
