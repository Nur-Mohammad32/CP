#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;

        vector<long long> a(n), b(m);

        for (long long i = 0; i < n; i++)
            cin >> a[i];
        for (long long j = 0; j < m; j++)
            cin >> b[j];

        cout << (n + m) << endl;
    }
    return 0;
}
