#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];
int mx, cmp;

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
    if (leaderA == leaderB)
        return;

    if (group_size[leaderA] >= group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
        mx = max(mx, group_size[leaderA]);
    }
    else
    {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
        mx = max(mx, group_size[leaderB]);
    }
    cmp--;
}

int main()
{
    int n, e;
    cin >> n >> e;
    cmp = n;
    mx = 1;

    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        dsu_union(a, b);
        cout << cmp << " " << mx << endl;
    }

    return 0;
}
