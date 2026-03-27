#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char grid[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '#')
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int k = 0; k < 4; k++)
    {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;
        if (valid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    pair<int, int> A = {-1, -1};
    pair<int, int> B = {-1, -1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];

            if (grid[i][j] == 'A')
                A = {i, j};
            else if (grid[i][j] == 'B')
                B = {i, j};
        }
    }

    int a1 = A.first;
    int a2 = A.second;

    int b1 = B.first;
    int b2 = B.second;

    memset(vis, false, sizeof(vis));

    dfs(a1, a2);

    if (vis[b1][b2])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
