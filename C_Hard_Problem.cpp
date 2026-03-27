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

        int seat = 2 * m;

        int ans = 0;

        int ans1 = min(a, m);
        int rem1 = m - ans1;

        int ans2 = min(b, m);
        int rem2 = m - ans2;

        int free = rem1 + rem2;
        int ans3 = min(c, free);

        ans = ans1 + ans2 + ans3;
        cout << ans << endl;
    }

    return 0;
}
