#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        vector<int> v;

        if (x < 10)
        {
            cout << x << endl;
        }
        else
        {
            int tmp = x;
            int mn = 9;
            while (tmp != 0)
            {
                int digit = tmp % 10;
                mn = min(mn, digit);
                tmp = tmp / 10;
            }
            cout << mn << endl;
        }
    }

    return 0;
}
