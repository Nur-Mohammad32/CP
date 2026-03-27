#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> adj[100001];
int N;
pair<int, int> bfs(int start, vector<int> &color, int colorValue)
{
    queue<int> q;
    vector<int> dist(N + 1, -1);
    q.push(start);
    dist[start] = 0;
    color[start] = colorValue;
    int farthestNode = start, maxDist = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int neigh : adj[node])
        {
            if (color[neigh] == 0)
            {
                color[neigh] = colorValue;
                dist[neigh] = dist[node] + 1;
                q.push(neigh);
                if (dist[neigh] > maxDist)
                {
                    maxDist = dist[neigh];
                    farthestNode = neigh;
                }
            }
        }
    }
    return {farthestNode, maxDist};
}
int main()
{
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if (N == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<int> color(N + 1, 0);
    int nodeA = bfs(1, color, 1).first;
    fill(color.begin(), color.end(), 0);
    int diameter = bfs(nodeA, color, 2).second;
    cout << diameter << endl;
    return 0;
}