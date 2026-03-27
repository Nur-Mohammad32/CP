#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    int sn = 0;
    int sp = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            sp += A[i];
        }
        else
        {
            sn += A[i];
        }
    }

    printf("%d %d", sp, sn);

    return 0;
}
