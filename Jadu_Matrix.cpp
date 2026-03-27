#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool flag1 = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][i] != 1)
        {
            flag1 = false;
            break;
        }
    }

    int i = 0;
    int j = n - 1;
    bool flag2 = true;
    while ((i < n) && (j >= 0))
    {
        if (arr[i][j] != 1)
        {
            flag2 = false;
        }
        i++;
        j--;
    }

    bool flag3 = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i != j) && (i + j != n - 1))
            {
                if (arr[i][j] != 0)
                {
                    flag3 = false;
                    break;
                }
            }
        }
        if (flag3 == false)
        {
            break;
        }
    }

    if ((flag1 == true) && (flag2 == true) && (flag3 == true))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
