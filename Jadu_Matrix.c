#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m)
    {
        printf("NO");
        return 0;
    }

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][i] != 1)
        {
            flag1 = 0;
            break;
        }
    }

    int i = 0, j = n - 1;
    int flag2 = 1;
    while ((i < n) && (j >= 0))
    {
        if (arr[i][j] != 1)
        {
            flag2 = 0;
        }
        i++;
        j--;
    }

    int flag3 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i != j) && (i + j != n - 1))
            {
                if (arr[i][j] != 0)
                {
                    flag3 = 0;
                    break;
                }
            }
        }
        if (flag3 == 0)
        {
            break;
        }
    }

    if ((flag1 == 1) && (flag2 == 1) && (flag3 == 1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
