#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> v[N];
bool vis[N];
int level[N];

void bfs(int src)
{
    queue<int> q;
    vis[src] = true;
    level[src] = 0;
    q.push(src);

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

    int src, des;
    cin >> src >> des;
    bfs(src);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << level[i] << endl;
    }

    cout << "Distance = " << level[des] << endl;

    return 0;
}
