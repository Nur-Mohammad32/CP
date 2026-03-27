#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    while(t--) 
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int m = m1 + m2;
        int d2 = (d * m1) / m ;
        int ans = d - d2;
        
        printf("%d\n", ans);
    }

    return 0;
}
