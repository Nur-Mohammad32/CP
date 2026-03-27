#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;

        if (u == v)
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag = false;
        for (int x : adj[u])
        {
            if (x == v)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
