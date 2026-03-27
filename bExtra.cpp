#include <bits/stdc++.h>
using namespace std;

vector<int> v[10005];
bool vis[10005];
int dist[10005];

pair<int, int> bfs(int src, int N)
{
    memset(vis, false, sizeof(vis));
    memset(dist, 0, sizeof(dist));
    queue<int> q;
    q.push(src);
    vis[src] = true;
    int farthestNode = src;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                dist[child] = dist[par] + 1;
                q.push(child);
                if (dist[child] > dist[farthestNode])
                {
                    farthestNode = child;
                }
            }
        }
    }
    return {farthestNode, dist[farthestNode]};
}

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    pair<int, int> first = bfs(1, N);
    pair<int, int> second = bfs(first.first, N);

    cout << second.second << endl;

    return 0;
}