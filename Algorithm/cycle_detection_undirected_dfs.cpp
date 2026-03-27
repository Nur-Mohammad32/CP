#include <bits/stdc++.h>
using namespace std;
vector<int> v[105];
int parent[105];
bool vis[105];
bool cycle;

void dfs(int src)
{
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[src] && parent[src] != child)
        {
            cycle = true;
        }
        if (!vis[child])
        {
            parent[child] = src;
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycle = false;

    for (int i = 0; i < n; i++)
        if (!vis[i])
        {
            dfs(i);
        }

    if (cycle)
    {
        cout << "Cycle found";
    }
    else
    {
        cout << "Cycle not found";
    }

    return 0;
}
