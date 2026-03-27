#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> v(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int u;
        cin >> u;

        vector<int> v1;

        for (int x : v[u])
        {
            v1.push_back(x);
        }
        sort(v1.begin(), v1.end(), greater<int>());

        if (v1.empty())
        {
            cout << -1;
        }
        else
        {
            for (int x : v1)
            {
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
