#include <bits/stdc++.h>
using namespace std;


int par[100005];
int group_size[100005];

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

    if (leaderA != leaderB)
    {
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
}

int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    int n, e;
    cin >> n >> e;

    int count = 0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB)
        {
            count++;
        }
        else
        {
            dsu_union(a, b);
        }
    }

    cout << count << endl;

    return 0;
}
