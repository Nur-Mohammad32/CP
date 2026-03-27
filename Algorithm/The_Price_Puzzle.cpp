#include <bits/stdc++.h>
using namespace std;
int dp[200005];
int sum[200005];

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = total; j >= a[i]; j--)
        {
            if (dp[j - a[i]] == 1)
            {
                dp[j] = 1;
            }
        }
    }

    sum[0] = dp[0];
    for (int i = 1; i <= total; i++)
    {
        sum[i] = sum[i - 1] + dp[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int L, R;
        cin >> L >> R;

        L = max(L, 0);
        R = min(R, total);

        int ans;
        if (L > R)
        {
            ans = 0;
        }
        else
        {
            if (L == 0)
                ans = sum[R];
            else
                ans = sum[R] - sum[L - 1];
        }

        cout << ans << endl;
    }

    return 0;
}
