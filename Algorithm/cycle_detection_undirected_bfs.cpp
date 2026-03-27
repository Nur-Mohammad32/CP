#include <bits/stdc++.h>
using namespace std;
vector<int> v[105];
int parent[105];
bool vis[105];
bool cycle;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (vis[child] && parent[par] != child)
            {
                cycle = true;
            }
        }

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
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
            bfs(i);
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
