#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int MAX = 1000;
vector<int> adj[MAX];
bool visited[MAX];
int disc[MAX], low[MAX], parent[MAX];
set<int> articulationPoints;
int timer = 0;

void dfs(int u)
{
    visited[u] = true;
    disc[u] = low[u] = ++timer;
    int children = 0;

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            children++;
            parent[v] = u;
            dfs(v);

            low[u] = min(low[u], low[v]);

            if (parent[u] == -1 && children > 1)
                articulationPoints.insert(u);
            if (parent[u] != -1 && low[v] >= disc[u])
                articulationPoints.insert(u);
        }
        else if (v != parent[u])
        {
            low[u] = min(low[u], disc[v]);
        }
    }
}

int main()
{
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
        parent[i] = -1;
    }


    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            dfs(i);
    }


    cout << "Articulation Points: ";
    if (articulationPoints.empty())
        cout << "None";
    else
        for (int ap : articulationPoints)
            cout << ap << " ";
    cout << endl;

    return 0;
}
