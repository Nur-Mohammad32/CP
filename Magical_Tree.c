#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int row = 6 + ((N - 1) / 2);
    int col = 2 * row - 1;

    int star1, space1;

    for (int i = 1; i <= row; i++)
    {
        star1 = 2 * i - 1;
        space1 = (col - star1) / 2;

        for (int j = 0; j < space1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    int space2 = (col - N) / 2;
    int star2 = N;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < space2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star2; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
