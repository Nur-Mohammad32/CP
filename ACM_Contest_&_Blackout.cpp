#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int parent[N], group_size[N];

// Initialize DSU (Disjoint Set Union)
void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        group_size[i] = 1;
    }
}

// Find operation with path compression
int dsu_find(int node) {
    if (parent[node] == node)
        return node;
    parent[node] = dsu_find(parent[node]); // Path compression
    return parent[node];
}

// Union by size
void dsu_union_by_size(int node1, int node2) {
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);
    if (leader1 != leader2) {
        if (group_size[leader1] > group_size[leader2]) {
            parent[leader2] = leader1;
            group_size[leader1] += group_size[leader2];
        } else {
            parent[leader1] = leader2;
            group_size[leader2] += group_size[leader1];
        }
    }
}

// Edge class to represent each edge in the graph
class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

// Comparator to sort edges by their weight (ascending order)
bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m; // Read number of schools (nodes) and connections (edges)

        dsu_initialize(n); // Initialize DSU for `n` nodes
        vector<Edge> edgeList;

        // Read all edges
        while (m--) {
            int u, v, w;
            cin >> u >> v >> w; // Read each connection (edge)
            edgeList.push_back(Edge(u - 1, v - 1, w)); // Adjust for 0-based indexing
        }

        // Sort the edges based on weight (ascending order)
        sort(edgeList.begin(), edgeList.end(), cmp);

        vector<int> mstEdges;
        int totalCost = 0;

        // Perform Kruskal's algorithm to find the MST
        for (Edge ed : edgeList) {
            int leaderU = dsu_find(ed.u);
            int leaderV = dsu_find(ed.v);

            if (leaderU != leaderV) {
                dsu_union_by_size(ed.u, ed.v);
                mstEdges.push_back(ed.w); // Store the weight of the edge included in MST
                totalCost += ed.w;
            }

            // Stop when we have enough edges to form the MST (n-1 edges for n nodes)
            if (mstEdges.size() == static_cast<std::vector<int>::size_type>(n - 1))
                break;
        }

        // If we can't connect all nodes (not enough edges in MST), output IMPOSSIBLE
        if (mstEdges.size() < static_cast<std::vector<int>::size_type>(n - 1)) {
            cout << "IMPOSSIBLE" << endl;
        } else {
            // Sort the MST edges and get the two smallest ones
            sort(mstEdges.begin(), mstEdges.end());
            cout << mstEdges[0] << " " << mstEdges[1] << endl; // Output the two smallest edges
        }
    }
    return 0;
}
