#include <stdio.h>
int main() 
{
    int t;
    scanf("%d", &t);
    
    while (t--) 
    {
        char s[10000];
        scanf("%s", s);
        
        int capital = 0, small = 0, digit = 0;

        int l = 0;
        for (int i = 0;s[i] != '\0'; i++)
        {
            l++;
        }
            for (int i = 0; i < l; i++)
            {
                if (s[i] >= 65 && s[i] <= 90)
                {
                    capital++;
                }
                else if (s[i] >= 97 && s[i] <= 122)
                {
                    small++;
                }
                else if (s[i] >= 48 && s[i] <= 57)
                {
                    digit++;
                }
            }
        
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}
