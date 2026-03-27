#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        const long long INF = (1LL << 60);
        vector<vector<long long>> mn(n, vector<long long>(n, INF));
        vector<vector<long long>> mx(n, vector<long long>(n, -INF));

        for (int i = 0; i < n; i++) mn[i][i] = mx[i][i] = v[i];

        for (int len = 2; len <= n; len++) {
            for (int l = 0; l + len - 1 < n; l++) {
                int r = l + len - 1;
                for (int k = l; k < r; k++) {
                    mn[l][r] = min(mn[l][r], mn[l][k] + 2 * mn[k + 1][r]);
                    mx[l][r] = max(mx[l][r], mx[l][k] + 2 * mx[k + 1][r]);
                }
            }
        }

        cout << mn[0][n - 1] << " " << mx[0][n - 1] << "\n";
    }
    return 0;
}
