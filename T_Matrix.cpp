#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {

        sum1 += arr[i][i];
    }
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum2 += arr[i][n - i - 1];
    }

    int diff = sum1 - sum2;

    cout << abs(diff);

    return 0;
}
