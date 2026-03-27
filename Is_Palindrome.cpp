#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) 
{
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) 
    {
        if (str[i++] != str[j--]) 
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char S[1001];
    scanf("%s", S);

    if (is_palindrome(S) == 1) 
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not Palindrome\n");
    }

    return 0;
}