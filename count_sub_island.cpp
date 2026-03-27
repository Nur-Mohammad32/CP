#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int n, m;
    bool vis[505][505];
    bool flag;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
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

    void dfs(int si, int sj, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        vis[si][sj] = true;
        if (grid1[si][sj] == 0)
        {
            flag = false;
            for (int i = 0; i < 4; i++)
            {
                int ci = si + d[i].first;
                int cj = sj + d[i].second;
                if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
                {
                    dfs(ci, cj, grid1, grid2);
                }
            }
        }
    }

    int countSubIsland(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        memset(vis, false, sizeof(vis));
        n = grid2.size();
        m = grid2[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid2[i][j] == 1)
                {
                    flag = true;
                    dfs(1, j, grid1, grid2);
                    if (flag == true)
                    {
                        ans++;
                    }
                }
            }
        }
    }
};



// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// bool vis[505][505];
// bool flag;
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// bool valid(int ci, int cj)
// {
//     return (ci >= 0 && ci < n && cj >= 0 && cj < m);
// }

// void dfs(int si, int sj, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
// {
//     vis[si][sj] = true;
//     if (grid1[si][sj] == 0)
//     {
//         flag = false;
//     }
    
//     for (int i = 0; i < 4; i++)
//     {
//         int ci = si + d[i].first;
//         int cj = sj + d[i].second;
        
//         if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
//         {
//             dfs(ci, cj, grid1, grid2);
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     vector<vector<int>> grid1(n, vector<int>(m)), grid2(n, vector<int>(m));
//     memset(vis, false, sizeof(vis));
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid1[i][j];
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid2[i][j];
//         }
//     }
    
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j] && grid2[i][j] == 1)
//             {
//                 flag = true;
//                 dfs(i, j, grid1, grid2);
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



//implementation using bfs

//#include <bits/stdc++.h>
// using namespace std;

// int n, m;
// bool vis[505][505];
// bool flag;
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// bool valid(int ci, int cj)
// {
//     return (ci >= 0 && ci < n && cj >= 0 && cj < m);
// }

// void bfs(int si, int sj, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
    
//     if (grid1[si][sj] == 0)
//     {
//         flag = false;
//     }
    
//     while (!q.empty())
//     {
//         auto [si, sj] = q.front();
//         q.pop();
        
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = si + d[i].first;
//             int cj = sj + d[i].second;
            
//             if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
//             {
//                 if (grid1[ci][cj] == 0)
//                 {
//                     flag = false;
//                 }
//                 vis[ci][cj] = true;
//                 q.push({ci, cj});
//             }
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     vector<vector<int>> grid1(n, vector<int>(m)), grid2(n, vector<int>(m));
//     memset(vis, false, sizeof(vis));
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid1[i][j];
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid2[i][j];
//         }
//     }
    
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (!vis[i][j] && grid2[i][j] == 1)
//             {
//                 flag = true;
//                 bfs(i, j, grid1, grid2);
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
