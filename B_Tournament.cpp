#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> v(n);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        if (k > 1 || v[j - 1] == mx)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}