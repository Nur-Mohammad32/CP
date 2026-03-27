#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool vis[55][55];
    int ans;
    int n, m;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool valid(int ci, int cj)
    {
        if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        ans++;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(ci, cj, grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        memset(vis, false, sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    ans = 0;
                    dfs(i, j, grid);
                    mx = max(mx, ans);
                }
            }
        }
        return mx;
    }
};


// #include <bits/stdc++.h>
// using namespace std;

// bool vis[55][55];
// int ans;
// int n, m;
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

// bool valid(int ci, int cj)
// {
//     return (ci >= 0 && ci < n && cj >= 0 && cj < m);
// }

// void dfs(int si, int sj, vector<vector<int>> &grid)
// {
//     vis[si][sj] = true;
//     ans++;
//     for (int i = 0; i < 4; i++)
//     {
//         int ci = si + d[i].first;
//         int cj = sj + d[i].second;
//         if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
//         {
//             dfs(ci, cj, grid);
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     vector<vector<int>> grid(n, vector<int>(m));
//     memset(vis, false, sizeof(vis));
//     int mx = 0;
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j] && grid[i][j] == 1)
//             {
//                 ans = 0;
//                 dfs(i, j, grid);
//                 mx = max(mx, ans);
//             }
//         }
//     }
    
//     cout << mx << endl;
//     return 0;
// }

//implementation using bfs
// #include <bits/stdc++.h>
// using namespace std;

// bool vis[55][55];
// int n, m;
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

// bool valid(int ci, int cj)
// {
//     return (ci >= 0 && ci < n && cj >= 0 && cj < m);
// }

// int bfs(int si, int sj, vector<vector<int>> &grid)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
//     int area = 1;
    
//     while (!q.empty())
//     {
//         auto [si, sj] = q.front();
//         q.pop();
        
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = si + d[i].first;
//             int cj = sj + d[i].second;
//             if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
//             {
//                 vis[ci][cj] = true;
//                 q.push({ci, cj});
//                 area++;
//             }
//         }
//     }
//     return area;
// }

// int main()
// {
//     cin >> n >> m;
//     vector<vector<int>> grid(n, vector<int>(m));
//     memset(vis, false, sizeof(vis));
//     int mx = 0;
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j] && grid[i][j] == 1)
//             {
//                 mx = max(mx, bfs(i, j, grid));
//             }
//         }
//     }
    
//     cout << mx << endl;
//     return 0;
// }

