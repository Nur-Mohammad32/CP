#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long reslt = a * b * c;

        if (m == 0)
        {
            printf("0\n");
        }
        else if (reslt > m)
        {
            printf("-1\n");
        }
        else if (m % reslt != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", m / reslt);
        }
    }

    return 0;
}
