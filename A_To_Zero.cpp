#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int step = 0;
        if (n % 2 != 0)
        {
            n = n - k;
            step++;
            int p = n / (k - 1);
            step += p;
            n = n - (k - 1) * p;
            if (n != 0)
            {
                step++;
            }
        }
        else
        {
            int p = n / (k - 1);
            step += p;

            n = n - (p * (k - 1));
            if(n!=0)
            {
                step++;
            }
        }
        cout << step << endl;
    }

    return 0;
}
