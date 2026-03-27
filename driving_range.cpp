#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

// Initialize DSU (Disjoint Set Union)
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

// Find with Path Compression
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;  // Path compression
    return leader;
}

// Union by Size
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (leaderA != leaderB)
    {
        if (group_size[leaderA] > group_size[leaderB])
        {
            parent[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

// Edge class
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

// Comparator to sort edges by their weight
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin >> n >> e;

    dsu_initialize(n);  // Initialize DSU for `n` nodes

    vector<Edge> edgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));  // Add edges to the list
    }

    // Sort edges based on their weights (in increasing order)
    sort(edgeList.begin(), edgeList.end(), cmp);

    int totalCost = 0;
    int maxEdgeWeight = 0;

    // Kruskal's Algorithm to find the MST
    for (Edge ed : edgeList)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);

        // If they belong to the same set, skip this edge
        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            // Union the two sets
            dsu_union_by_size(ed.u, ed.v);

            // Add the weight of this edge to the total cost
            totalCost += ed.w;

            // Track the maximum edge weight in the MST
            maxEdgeWeight = max(maxEdgeWeight, ed.w);
        }
    }

    // If the MST doesn't contain all cities (i.e., the graph is not fully connected)
    bool allConnected = true;
    for (int i = 1; i < n; i++)
    {
        if (dsu_find(i) != dsu_find(0)) // Check if any node is not connected
        {
            allConnected = false;
            break;
        }
    }

    if (allConnected)
    {
        // The largest edge in the MST is the minimum required car range
        cout << maxEdgeWeight << endl;
    }
    else
    {
        // If the graph is disconnected, it's impossible to travel between all cities
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
