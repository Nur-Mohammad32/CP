#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;

    bool flag = false;

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
            cout << i << endl;
            flag = true;
        }
    }

    if (!flag)
    {
        cout << -1 << endl;
    }

    return 0;
}
