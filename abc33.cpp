#include <bits/stdc++.h>
using namespace std;
struct Edge
{
    int u, v, w;
    bool operator<(const Edge &other) const
    {
        return w < other.w;
    }
};
int find(vector<int> &parent, int x)
{
    if (parent[x] != x)
        parent[x] = find(parent, parent[x]);
    return parent[x];
}
bool union_sets(vector<int> &parent, vector<int> &rank, int a, int b)
{
    int ra = find(parent, a);
    int rb = find(parent, b);
    if (ra == rb)
        return false;
    if (rank[ra] < rank[rb])
        swap(ra, rb);
    parent[rb] = ra;
    if (rank[ra] == rank[rb])
        rank[ra]++;
    return true;
}
int kruskal(int n, vector<Edge> &edges, vector<Edge> &mst, Edge *skip = nullptr)
{
    vector<int> parent(n + 1), rank(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        parent[i] = i;
    int cost = 0, count = 0;
    for (auto &e : edges)
    {
        if (skip && e.u == skip->u && e.v == skip->v && e.w == skip->w)
            continue;
        if (union_sets(parent, rank, e.u, e.v))
        {
            cost += e.w;
            count++;
            if (!skip)
                mst.push_back(e);
        }
    }
    return (count == n - 1) ? cost : INT_MAX;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<Edge> edges(m);
        for (int i = 0; i < m; ++i)
            cin >> edges[i].u >> edges[i].v >> edges[i].w;
        sort(edges.begin(), edges.end());
        vector<Edge> mst;
        int s1 = kruskal(n, edges, mst);
        int s2 = INT_MAX;
        for (auto &e : mst)
        {
            vector<Edge> temp;
            int alt = kruskal(n, edges, temp, &e);
            if (alt != INT_MAX)
                s2 = min(s2, alt);
        }
        cout << s1 << " " << s2 << endl;
    }
    return 0;
}