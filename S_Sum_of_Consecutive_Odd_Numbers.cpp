#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        int sum = 0;
        if (X < Y)
        {
            for (int i = X + 1; i < Y; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        else
        {
            for (int i = Y + 1; i < X; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
