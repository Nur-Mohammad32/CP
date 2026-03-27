#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char n[101];
    scanf("%s", n);

    int odd_sum = 0;
    int even_sum = 0;

    int l = strlen(n);

    for (int i = l - 1; i >= 0; i--) 
    {
        int digit = n[i] - '0';

        if ((l - i) % 2 != 0) 
        {
            odd_sum += digit;
        } 
        else 
        {
            even_sum += digit;
        }
    }

    int diff = abs(odd_sum - even_sum);

    if (diff % 11 == 0) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
