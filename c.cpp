#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> grid;
void DFS(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != '1')
        return;
    grid[i][j] = '0';
    for (int di = -1; di <= 1; di++)
    {
        for (int dj = -1; dj <= 1; dj++)
        {
            if (di == 0 && dj == 0)
                continue;
            DFS(i + di, j + dj);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int imageNo = 1;
    while (cin >> n)
    {
        grid.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }
        int eaglesNo = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    eaglesNo++;
                    DFS(i, j);
                }
            }
        }
        cout << "Image number " << imageNo << " contains " << eaglesNo
             << " war eagles." << endl;
        imageNo++;
    }
    return 0;
}