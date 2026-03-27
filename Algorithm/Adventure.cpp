#include <bits/stdc++.h>
using namespace std;

int value[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int max_weight)
{
    if (i < 0 || max_weight <= 0)
        return 0;

    if (dp[i][max_weight] != -1)
        return dp[i][max_weight];

    dp[i][max_weight] = knapsack(i - 1, max_weight);

    if (weight[i] <= max_weight)
        dp[i][max_weight] = max(dp[i][max_weight], value[i] + knapsack(i - 1, max_weight - weight[i]));

    return dp[i][max_weight];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, W;
        cin >> n >> W;

        for (int i = 0; i < n; i++)
            cin >> weight[i];
        for (int i = 0; i < n; i++)
            cin >> value[i];

        for (int i = 0; i < n; i++)
            for (int j = 0; j <= W; j++)
                dp[i][j] = -1;

        cout << knapsack(n - 1, W) << endl;
    }
    return 0;
}
