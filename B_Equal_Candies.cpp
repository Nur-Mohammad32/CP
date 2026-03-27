#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int mn = INT_MAX, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            ans += a[i] - mn;
        }
        cout << ans << endl;
    }
}