#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> board(8);
        for (int i = 0; i < 8; i++)
        {
            cin >> board[i];
        }

        int r = -1, c = -1;
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (board[i][j] == '#' && board[i - 1][j - 1] == '#' && board[i - 1][j + 1] == '#')
                {
                    r = i + 1;
                    c = j + 1;
                }
            }
        }

        cout << r << " " << c << endl;
    }
}
