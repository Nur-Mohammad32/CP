#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        int k = n - 1;
        cout << arr[k][j] << " ";
    }
    cout << endl;

    for (int j = 0; j < n; j++)
    {
        int k = m - 1;
        cout << arr[j][k] << " ";
    }

    return 0;
}
