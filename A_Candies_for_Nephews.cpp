#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
            cout << 0 << endl;
        else
        {
            int p = n / 3 + 1;
            int ans = p * 3 - n;
            cout << ans << endl;
        }
    }

    return 0;
}
