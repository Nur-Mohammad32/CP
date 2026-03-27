#include <bits/stdc++.h>
using namespace std;

class Solution

{
public:
    bool vis[20005];
    vector<int> v[200005];

    void dfs(int s)
    {
        vis[s] = true;
        for (int child : v[s])
        {
            if (!vis[child])
            {
                dfs(child);
            }
        }
    }

    bool validPath(int, vector<vector<int>> &edges, int source, int destination)
    {
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(source);
        return vis[destination];
    }
};


// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[200005];
// bool vis[20005];

// void dfs(int s)
// {
//     vis[s] = true;
//     for (int child : v[s])
//     {
//         if (!vis[child])
//         {
//             dfs(child);
//         }
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> edges(m, vector<int>(2));
//     for (int i = 0; i < m; i++)
//     {
//         cin >> edges[i][0] >> edges[i][1];
//     }
//     int source, destination;
//     cin >> source >> destination;
    
//     memset(vis, false, sizeof(vis));
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int a = edges[i][0];
//         int b = edges[i][1];
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
    
//     dfs(source);
    
//     if (vis[destination])
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
    
//     return 0;
// }


//implementation using bfs

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v[200005];
// bool vis[20005];

// void dfs(int s)
// {
//     vis[s] = true;
//     for (int child : v[s])
//     {
//         if (!vis[child])
//         {
//             dfs(child);
//         }
//     }
// }

// bool bfs(int source, int destination)
// {
//     queue<int> q;
//     q.push(source);
//     vis[source] = true;
    
//     while (!q.empty())
//     {
//         int node = q.front();
//         q.pop();
        
//         if (node == destination)
//             return true;
        
//         for (int child : v[node])
//         {
//             if (!vis[child])
//             {
//                 vis[child] = true;
//                 q.push(child);
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> edges(m, vector<int>(2));
//     for (int i = 0; i < m; i++)
//     {
//         cin >> edges[i][0] >> edges[i][1];
//     }
//     int source, destination;
//     cin >> source >> destination;
    
//     memset(vis, false, sizeof(vis));
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int a = edges[i][0];
//         int b = edges[i][1];
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
    
//     if (bfs(source, destination))
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
    
//     return 0;
// }

