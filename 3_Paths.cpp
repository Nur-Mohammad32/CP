#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << -1 << "\n";
            continue;
        }

        vector<vector<int>> a(n, vector<int>(n, 0));

        // Fixed construction
        a[0][0] = 1;
        a[0][1] = 1;
        a[0][2] = 1;

        a[1][1] = 1;
        a[1][2] = 1;

        for (int i = 2; i < n - 1; i++) {
            a[i][1] = 1;
        }

        for (int j = 1; j < n; j++) {
            a[n - 1][j] = 1;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
