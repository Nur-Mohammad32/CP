#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }

    int count2 = 0, count3 = 0;
    for (int i = 0; i < N; i++) 
    {
        if (A[i] % 2 == 0 && A[i] % 3 == 0) 
        {
            count2++;
        } 
        else if (A[i] % 2 == 0) 
        {
            count2++;
        }
        else if (A[i] % 3 == 0) 
        {
            count3++;
        }
    }
    printf("%d %d\n", count2, count3);

    return 0;
}
