#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

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

bool isPossible(int max_dist, int n, vector<Edge> &edges)
{
    dsu_initialize(n);
    for (Edge ed : edges)
    {
        if (ed.w <= max_dist)
        {
            dsu_union_by_size(ed.u, ed.v);
        }
    }

    int root = dsu_find(0);
    for (int i = 1; i < n; i++)
    {
        if (dsu_find(i) != root)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, e;
    while (cin >> n >> e)
    {
        if (n == 0 && e == 0)
            break;

        vector<Edge> edgeList;
        int max_edge = 0;

        for (int i = 0; i < e; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            edgeList.push_back(Edge(u, v, w));
            max_edge = max(max_edge, w);
        }

        int left = 0, right = max_edge;
        int result = -1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (isPossible(mid, n, edgeList))
            {
                result = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        if (result == -1)
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
    return 0;
}
