#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;

    int i = 1;
    int ans;
    while (true)
    {

        int a = k * i;
        int digit = a % 10;
        if (digit == 0)
        {
            ans = i;
            break;
        }
        else if (digit == r)
        {
            ans = i;
            break;
        }
        else
        {
            i++;
        }
    }
    cout << ans;

    return 0;
}
