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

int find(vector<int> &par, int x)
{
    if (par[x] != x)
        par[x] = find(par, par[x]);
    return par[x];
}
bool unite(vector<int> &par, vector<int> &rank, int x, int y)
{
    int rx = find(par, x);
    int ry = find(par, y);
    if (rx == ry)
        return false;
    if (rank[rx] < rank[ry])
    {
        par[rx] = ry;
    }
    else
    {
        par[ry] = rx;
        if (rank[rx] == rank[ry])
            rank[rx]++;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        vector<Edge> edges(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> edges[i].u >> edges[i].v >> edges[i].w;
        }
        sort(edges.begin(), edges.end());
        vector<int> par(n), rank(n, 0);
        for (int i = 0; i < n; ++i)
            par[i] = i;
        int maxEdge = 0, edgeCount = 0;
        for (Edge &e : edges)
        {
            if (unite(par, rank, e.u, e.v))
            {
                maxEdge = max(maxEdge, e.w);
                edgeCount++;
                if (edgeCount == n - 1)
                    break;
            }
        }
        if (edgeCount == n - 1)
            cout << maxEdge << '\n';
        else
            cout << "IMPOSSIBLE\n";
    }
    return 0;
}
