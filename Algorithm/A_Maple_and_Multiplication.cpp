#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int mx = max(a, b);
        int mn = min(a, b);

        long long ans;
        if (a == b)
        {
            ans = 0;
        }
        else if (a == 1 || b == 1)
        {
            ans = 1;
        }
        else if (mx % mn == 0)
        {
            ans = 1;
        }
        else
        {
            ans = 2;
        }
        cout << ans << endl;
    }

    return 0;
}
