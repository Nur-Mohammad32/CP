#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int n, m;
    bool vis[105][105];
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    bool valid(int ci, int cj)
    {
        if (ci >= 0 && ci < n && cj >= 0 && cj < m)
            return true;
        else
            return false;
    }
    bool flag;
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        if (si == 0 || si == n - 1 || sj == 0 || sj == m - 1)
            flag = false;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        memset(vis, false, sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 0)
                {
                    flag = true;
                    dfs(i, j, grid);
                    if (flag == true)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};

// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// bool vis[105][105];
// bool flag;
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// bool valid(int ci, int cj)
// {
//     return (ci >= 0 && ci < n && cj >= 0 && cj < m);
// }

// void dfs(int si, int sj, vector<vector<int>> &grid)
// {
//     vis[si][sj] = true;
//     if (si == 0 || si == n - 1 || sj == 0 || sj == m - 1)
//         flag = false;
    
//     for (int i = 0; i < 4; i++)
//     {
//         int ci = si + d[i].first;
//         int cj = sj + d[i].second;
        
//         if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
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
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }
    
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j] && grid[i][j] == 0)
//             {
//                 flag = true;
//                 dfs(i, j, grid);
//                 if (flag)
//                 {
//                     ans++;
//                 }
//             }
//         }
//     }
    
//     cout << ans << endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// bool vis[105][105];
// bool flag;
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// bool valid(int ci, int cj)
// {
//     return (ci >= 0 && ci < n && cj >= 0 && cj < m);
// }

// void bfs(int si, int sj, vector<vector<int>> &grid)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
    
//     if (si == 0 || si == n - 1 || sj == 0 || sj == m - 1)
//         flag = false;
    
//     while (!q.empty())
//     {
//         auto [x, y] = q.front();
//         q.pop();
        
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = x + d[i].first;
//             int cj = y + d[i].second;
            
//             if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
//             {
//                 vis[ci][cj] = true;
//                 q.push({ci, cj});
//             }
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     vector<vector<int>> grid(n, vector<int>(m));
//     memset(vis, false, sizeof(vis));
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }
    
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j] && grid[i][j] == 0)
//             {
//                 flag = true;
//                 bfs(i, j, grid);
//                 if (flag)
//                 {
//                     ans++;
//                 }
//             }
//         }
//     }
    
//     cout << ans << endl;
//     return 0;
// }


