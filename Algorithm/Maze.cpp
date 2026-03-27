// #include <bits/stdc++.h>
// using namespace std;

// bool vis[105][105];
// int dis[105][105];
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
// int n, m;
// char a[105][105];
// pair<int, int> parent[105][105];

// bool valid(int i, int j)
// {
//     if (i < 0 || i >= n || j < 0 || j >= m)
//         return false;
//     return true;
// }

// void bfs(int si, int sj)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
//     dis[si][sj] = 0;

//     while (!q.empty())
//     {
//         auto par = q.front();
//         q.pop();
//         int x = par.first;
//         int y = par.second;

//         for (int i = 0; i < 4; i++)
//         {
//             int ci = x + d[i].first;
//             int cj = y + d[i].second;
//             if (valid(ci, cj) && !vis[ci][cj])
//             {
//                 if (a[ci][cj] == '#')
//                     continue;

//                 q.push({ci, cj});
//                 vis[ci][cj] = true;
//                 dis[ci][cj] = dis[x][y] + 1;
//                 parent[ci][cj] = {x, y};
//             }
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;

//     int si = -1, sj = -1;
//     int di = -1, dj = -1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//             if (a[i][j] == 'R')
//             {
//                 si = i, sj = j;
//             }

//             if (a[i][j] == 'D')
//             {
//                 di = i, dj = j;
//             }
//         }
//     }

//     memset(vis, false, sizeof(vis));
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             dis[i][j] = -1, parent[i][j] = {-1, -1};
//         }
//     }

//     if (si != -1 && sj != -1)
//         bfs(si, sj);

//     if (di != -1 && dj != -1 && vis[di][dj])
//     {
//         int x = di, y = dj;
//         while ((x == si && y == sj) == false)
//         {
//             auto p = parent[x][y];
//             if (p.first == -1)
//                 break;
//             if ((p.first == si && p.second == sj) == false)
//             {
//                 if (a[p.first][p.second] == '.')
//                     a[p.first][p.second] = 'X';
//             }
//             x = p.first;
//             y = p.second;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j];
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool vis[105][105];
int dis[105][105];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char a[105][105];
pair<int, int> parent[105][105];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = x + d[i].first;
            int cj = y + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                if (a[ci][cj] == '#')
                {
                    continue;
                }

                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[x][y] + 1;
                parent[ci][cj] = {x, y};
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    int si = -1, sj = -1;
    int di = -1, dj = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (a[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            dis[i][j] = -1;
            parent[i][j] = {-1, -1};
        }
    }

    if (si != -1 && sj != -1)
    {
        bfs(si, sj);
    }

    if (di != -1 && dj != -1 && vis[di][dj])
    {
        int x = di, y = dj;
        while ((x == si && y == sj) == false)
        {
            pair<int, int> p = parent[x][y];
            if (p.first == -1)
            {
                break;
            }
            if ((p.first == si && p.second == sj) == false)
            {
                if (a[p.first][p.second] == '.')
                {
                    a[p.first][p.second] = 'X';
                }
            }
            x = p.first;
            y = p.second;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
