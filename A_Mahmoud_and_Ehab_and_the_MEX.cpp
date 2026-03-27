#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < x)
            count++;
    }

    int ans = x - count;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
            ans++;
    }

    cout << ans << endl;

    return 0;
}
