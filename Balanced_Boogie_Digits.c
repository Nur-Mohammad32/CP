#include <stdio.h>

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    int flag = 0;

    for (int i = l; i <= r; i++)
    {
        int count_even = 0;
        int count_odd = 0;
        int num = i;

        while (num != 0)
        {
            int digit = num % 10;
            if (digit % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
            num /= 10;
        }

        if (count_odd == count_even)
        {
            printf("%d\n", i);
            flag = 1;
        }
    }

    if (flag==0)
    {
        printf("-1");
    }

    return 0;
}
