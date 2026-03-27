#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<char>> grid;

vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

void DFS(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != '1')
        return;

    grid[i][j] = '0';

    for (auto d : directions)
    {
        DFS(i + d.first, j + d.second);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int imageNo = 1;
    while (cin >> n)
    {
        grid.assign(n, vector<char>(n));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
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
