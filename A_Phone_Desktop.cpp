#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int ans = 0;

        if (x == 0 && y == 0)
        {
            ans = 0;
        }
        else if (y == 0)
        {
            if (x <= 15)
            {
                ans = 1;
            }
            else
            {
                if (x % 15 == 0)
                {
                    ans = x / 15;
                }
                else
                {
                    ans = x / 15 + 1;
                }
            }
        }
        else
        {
            int s = 0;
            if (y % 2 == 0)
            {
                s = y / 2;
            }
            else
            {
                s = y / 2 + 1;
            }

            int free = s * 15 - y * 4;

            if (x <= free)
            {
                ans = s;
            }
            else
            {
                int a = x - free;
                if (a <= 15)
                {
                    ans = s + 1;
                }
                else
                {
                    if (a % 15 == 0)
                    {
                        ans = s + (a / 15);
                    }
                    else
                    {
                        int b = a / 15 + 1;
                        ans = s + b;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
