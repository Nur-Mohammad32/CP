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

    int mx = 0;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }

        if (count > mx)
        {
            mx = count;
            index = i;
        }
    }

    printf("%d", index);
    return 0;
}
