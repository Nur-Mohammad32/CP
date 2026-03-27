#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[105][105];
int dis[105][105];

vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            vis[i][j] = false;
            dis[i][j] = -1;
        }
    }

    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int x = par.first;
        int y = par.second;
        q.pop();
        for (int k = 0; k < 8; k++)
        {
            int ci = x + d[k].first;
            int cj = y + d[k].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                dis[ci][cj] = dis[x][y] + 1;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ki, kj, qi, qj;
        cin >> n >> m;
        cin >> ki >> kj;
        cin >> qi >> qj;

        bfs(ki, kj);
        cout << dis[qi][qj] << endl;
    }
    return 0;
}
