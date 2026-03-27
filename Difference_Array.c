#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int B[N];
        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }

        int i = 0, j = N - 1;
        while (i < j)
        {
            int temp = B[i];
            B[i] = B[j];
            B[j] = temp;
            i++;
            j--;
        }

        for (i = 0; i < N - 1; i++)
        {
            for (j = i + 1; j < N; j++)
            {
                if (B[j]<B[i])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        int C[N];
        for (i = 0; i < N; i++)
        {
            C[i] = A[i] - B[i];
            if(C[i]<0)
            {
                C[i] *= -1;
            }
        }

        for (i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
