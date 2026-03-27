#include <bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    cin >> q;

    int in = 0;
    int mx = 0;
    while (q--)
    {
        int a, b;
        cin >> a >> b;

        in -= a;
        in += b;
        mx = max(mx, in);
    }
    cout << mx;

    return 0;
}
