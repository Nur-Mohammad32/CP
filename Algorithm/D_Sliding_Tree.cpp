#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj_list(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }

        if (n <= 2)
        {
            cout << -1 << endl;
            continue;
        }

        bool path = true;
        for (int i = 1; i <= n; i++)
        {
            if (adj_list[i].size() > 2)
            {
                path = false;
                break;
            }
        }
        if (path)
        {
            cout << -1 << endl;
            continue;
        }
        int b = -1;
        for (int i = 1; i <= n; ++i)
        {
            if (adj_list[i].size() >= 3)
            {
                b = i;
                break;
            }
        }

        vector<int> leafNei, nonLeafNei, allNei = adj_list[b];
        sort(allNei.begin(), allNei.end());
        for (int v : allNei)
        {
            if (adj_list[v].size() == 1)
                leafNei.push_back(v);
            else
                nonLeafNei.push_back(v);
        }

        int a = -1, c = -1;
        if (leafNei.size() >= 3)
        {
            a = leafNei[0];
            c = leafNei[1];
        }
        else if (leafNei.size() == 2)
        {
            a = nonLeafNei.front();
            c = leafNei.front();
        }
        else if (leafNei.size() == 1)
        {
            c = leafNei[0];
            a = nonLeafNei.front();
        }
        else
        {
            a = allNei[0];
            c = allNei[1];
        }

        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
