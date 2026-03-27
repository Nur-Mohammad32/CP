#include <stdio.h>
#include <string.h>

int main() 
{
    char s[10000];
    scanf("%s", s);

    int l = 0;
    for (int i = 0; s[i] != '\0';i++)
    {
        l++;
    }
    
    int freq[26] = {0};

    for (int i = 0; i < l; i++) 
    {
        int val = s[i];
        freq[val - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0) 
        {
            printf("%c - %d", i + 97, freq[i]);
            printf("\n");
        }
    }    
    return 0;
}
