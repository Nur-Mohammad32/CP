#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

class Edge
{
public:
    int u, v;
    long long w;
    Edge(int u, int v, long long w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

vector<Edge> edge_list;
int n, e;

pair<bool, vector<long long>> bellman_ford(int source)
{
    vector<long long> dist(n + 1, INF);
    dist[source] = 0;

    // Relax all edges n-1 times
    for (int i = 1; i < n; i++)
    {
        for (auto ed : edge_list)
        {
            int u = ed.u;
            int v = ed.v;
            long long w = ed.w;

            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Check for negative cycles
    bool hasNegativeCycle = false;
    for (auto ed : edge_list)
    {
        int u = ed.u;
        int v = ed.v;
        long long w = ed.w;

        if (dist[u] != INF && dist[u] + w < dist[v])
        {
            hasNegativeCycle = true;
            break;
        }
    }

    return {hasNegativeCycle, dist};
}

int main()
{
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edge_list.push_back(Edge(u, v, w));
    }

    int source;
    cin >> source;

    int t;
    cin >> t;

    auto result = bellman_ford(source);
    bool hasNegativeCycle = result.first;
    vector<long long> dist = result.second;

    if (hasNegativeCycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    while (t--)
    {
        int dest;
        cin >> dest;

        if (dist[dest] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[dest] << endl;
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, e;
//     cin >> n >> e;

//     const long long INF = 1e15;
//     long long adj_mat[n + 1][n + 1];

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == j)
//                 adj_mat[i][j] = 0;
//             else
//                 adj_mat[i][j] = INF;
//         }
//     }

//     while (e--)
//     {
//         int a, b;
//         long long c;
//         cin >> a >> b >> c;
//         adj_mat[a][b] = min(adj_mat[a][b], c);
//     }

//     for (int k = 1; k <= n; k++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (adj_mat[i][k] != INF && adj_mat[k][j] != INF &&
//                     adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
//                 {
//                     adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
//                 }
//             }
//         }
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (adj_mat[i][i] < 0)
//         {
//             cout << "Negative Cycle Detected" << endl;
//             return 0;
//         }
//     }

//     int src;
//     cin >> src;

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int des;
//         cin >> des;
//         if (adj_mat[src][des] >= INF)
//             cout << "Not Possible" << endl;
//         else
//             cout << adj_mat[src][des] << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, e;
//     cin >> n >> e;

//     const long long INF = 1e18;
//     long long adj_mat[n + 1][n + 1];

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == j)
//                 adj_mat[i][j] = 0;
//             else
//                 adj_mat[i][j] = INF;
//         }
//     }

//     while (e--)
//     {
//         int a, b;
//         long long c;
//         cin >> a >> b >> c;
//         adj_mat[a][b] = c;
//     }

//     bool flag = false;
//     for (int k = 1; k <= n; k++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (adj_mat[i][k] != INF && adj_mat[k][j] != INF &&
//                     adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
//                 {
//                     adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
//                     if (i == j && adj_mat[i][j] < 0)
//                     {
//                         flag = true;
//                     }
//                 }
//             }
//         }
//     }

//     if (flag)
//     {
//         cout << "Negative Cycle Detected" << endl;
//         return 0;
//     }

//     int src;
//     cin >> src;

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int des;
//         cin >> des;
//         if (adj_mat[src][des] >= INF)
//             cout << "Not Possible" << endl;
//         else
//             cout << adj_mat[src][des] << endl;
//     }

//     return 0;
// }