#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> v[N];
bool vis[N];
int level[N];
int parent[N];

void bfs(int src)
{
    queue<int> q;
    vis[src] = true;
    q.push(src);
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        cout << par << " ";

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
    cout << endl;
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
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int src, des;
    cin >> src >> des;
    bfs(src);
    vector<int> path;

    int node = des;

    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());
    for (int x : path)
    {
        cout << x << " ";
    }

        return 0;
}
