#include <stdio.h>
void pattern(int N) 
{
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 0; j < N - i; j++) 
        {
            printf(" ");
        }

        char ch;
        if (i % 2 == 1) 
        {
            ch = '#';
        } 
        else 
        {
            ch = '-';
        }

        for (int j = 0; j < 2 * i - 1; j++) 
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) 
    {
        for (int j = 0; j < N - i; j++) 
        {
            printf(" ");
        }

        char ch;
        if (i % 2 == 1) 
        {
            ch = '#';
        } 
        else 
        {
            ch = '-';
        }
        for (int j = 0; j < 2 * i - 1; j++) 
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main() 
{
    int N;
    scanf("%d", &N);
    pattern(N);
    return 0;
}