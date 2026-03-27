#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int ans = 0;
        int mn = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            int x, y;
            cin >> x >> y;

            ans = abs(x - a) + abs(y - b);
            mn = min(mn, ans);
        }
        cout << mn << endl;
    }

    return 0;
}
