#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (group_size[leaderA] >= group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));
    vector<pair<int, int>> p;
    vector<pair<int, int>> create;
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB)
            p.push_back({a, b});
        else
            dsu_union(a, b);
    }

    for (int i = 2; i <= n; i++)
    {
        int leader1 = dsu_find(1);
        int leader2 = dsu_find(i);

        if (leader1 != leader2)
        {
            create.push_back({1, i});
            dsu_union(1, i);
        }
    }

    cout << p.size() << endl;
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << " " << create[i].first << " " << create[i].second << endl;
    }

    return 0;
}
