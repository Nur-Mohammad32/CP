#include <stdio.h>
int main()
{
    char S[1000001];
    scanf("%s", S);

    int l = 0;
    for (int i = 0; S[i] != '\0'; i++) 
    {
        l++;
    }

    int countVowel = 0;
    for (int i = 0; i < l; i++) 
    {
        if (S[i] == 97 || S[i] == 101 || S[i] == 105 || S[i] == 111 || S[i] == 117) 
        {
            countVowel++;
        }
    }

    int ans = l - countVowel;
    printf("%d\n", ans);

    return 0;
}
