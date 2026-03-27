#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long cost = 0;

    // Ensure the zigzag pattern
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {  // For even index (0-based, i is odd): a[i] should be less than a[i+1]
            if (a[i] >= a[i + 1]) {
                cost += a[i] - a[i + 1] + 1;  // Decrease a[i] to make a[i] < a[i+1]
                a[i] = a[i + 1] - 1;  // Adjust a[i] to make the condition hold
            }
        } else {  // For odd index (0-based, i is even): a[i] should be greater than a[i+1]
            if (a[i] <= a[i + 1]) {
                cost += a[i + 1] - a[i] + 1;  // Decrease a[i+1] to make a[i] > a[i+1]
                a[i + 1] = a[i] - 1;  // Adjust a[i+1] to make the condition hold
            }
        }
    }

    cout << cost << endl;
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
