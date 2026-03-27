#include <bits/stdc++.h>
using namespace std;

const int n = 1e5;
vector<int> v[n];
bool vis[n];

void bfs(int src)
{
    queue<int> q;
    vis[src] = true;
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

    int src, des;
    cin >> src >> des;
    bfs(src);

    if (vis[des])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
