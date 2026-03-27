#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        int top_i = -1, bottom_i = -1, col = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '#')
                {
                    if (top_i == -1)
                    {
                        top_i = i;
                        col = j;
                    }
                    bottom_i = i;
                }
            }
        }

        int h = (top_i + bottom_i) / 2 + 1;
        int k = col + 1;
        cout << h << " " << k << endl;
    }
    return 0;
}
