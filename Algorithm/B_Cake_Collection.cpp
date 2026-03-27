#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;
        int k = min((long long)n, m);

        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<long long>());

        long long ans = 0;

        for (int i = 0; i < k; i++)
        {
            ans += m * v[i];
            m--;
        }
        cout << ans << endl;
    }

    return 0;
}
