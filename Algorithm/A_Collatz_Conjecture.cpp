#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int k, x;
        cin >> k >> x;

        int ans = x;
        for (int i = 0; i < k;i++)
        {
            ans *= 2;
        }
        cout << ans << endl;
    }

    return 0;
}
