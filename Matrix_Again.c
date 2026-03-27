#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < m; j++)
    {
        int k = n - 1;
        printf("%d ", arr[k][j]);
    }
    printf("\n");

    for (int j = 0; j < n; j++)
    {
        int k = m - 1;
        printf("%d ", arr[j][k]);
    }

    return 0;
}
