#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if (parent[node] != node)
        parent[node] = dsu_find(parent[node]);
    return parent[node];
}

void dsu_union_by_size(vector<int>& parent, vector<int>& rank, int a, int b) {
    int ra = dsu_find(a);
    int rb = dsu_find(b);
    if (ra == rb) return; // If already connected, no need to union

    if (rank[ra] < rank[rb])
        swap(ra, rb);

    parent[rb] = ra;
    if (rank[ra] == rank[rb]) rank[ra]++;
}

class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int kruskal(int n, vector<Edge>& edges, vector<Edge>& mst, Edge* skip = nullptr) {
    vector<int> parent(n + 1), rank(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        parent[i] = i;

    int cost = 0, count = 0;
    for (auto& e : edges) {
        if (skip && e.u == skip->u && e.v == skip->v && e.w == skip->w)
            continue;

        if (dsu_find(parent, e.u) != dsu_find(parent, e.v)) {
            dsu_union_by_size(parent, rank, e.u, e.v);
            cost += e.w;
            count++;
            if (!skip) 
                mst.push_back(e);
        }
    }

    return (count == n - 1) ? cost : INT_MAX;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<Edge> edges(m);
        for (int i = 0; i < m; ++i)
            cin >> edges[i].u >> edges[i].v >> edges[i].w;

        sort(edges.begin(), edges.end(), cmp);
        
        vector<Edge> mst;
        int s1 = kruskal(n, edges, mst);
        int s2 = INT_MAX;

        // Finding the second minimum MST
        for (auto& e : mst) {
            vector<Edge> temp;
            int alt = kruskal(n, edges, temp, &e); // Skip the edge e
            if (alt != INT_MAX) 
                s2 = min(s2, alt);
        }
        
        cout << s1 << " " << s2 << endl;
    }

    return 0;
}
