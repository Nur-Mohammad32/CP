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
    int n, e;
    cin >> n >> e;

    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
            dsu_union(a, b);
    }

    if (cycle)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "No Cycle" << endl;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << i << " -> " << par[i] << endl;
    }

    return 0;
}

/*
input
6 6
0 1
1 2
0 4
4 5
5 3
3 4
*/