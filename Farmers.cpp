#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m1, m2, d;
        cin >> m1 >> m2 >> d;

        int d2 = (d * m1) / (m1 + m2);
        int ans = d - d2;
        cout << ans << endl;
    }

    return 0;
}
