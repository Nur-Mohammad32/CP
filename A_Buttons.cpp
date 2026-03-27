#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    if (a > b)
    {
        ans += a;
        a--;
    }
    else if (b > a)
    {
        ans += b;
        b--;
    }
    else
    {
        ans += a;
        a--;
    }

    int mx = max(a, b);
    ans += mx;

    cout << ans << endl;

    return 0;
}
