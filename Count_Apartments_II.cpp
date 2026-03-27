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

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int sz = 1;
    for (int k = 0; k < 4; k++)
    {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;
        if (valid(ci, cj) && !vis[ci][cj])
        {
            sz += dfs(ci, cj);
        }
    }
    return sz;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                int total = dfs(i, j);
                v1.push_back(total);
            }
        }
    }
    sort(v1.begin(), v1.end());
    if (v1.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        for (int x : v1)
        {
            cout << x << " ";
        }
    }

    return 0;
}
