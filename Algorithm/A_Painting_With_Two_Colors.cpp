#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;

        bool flag = false;
        if (a < b)
        {
            if ((n - b) % 2 == 0)
            {
                flag = true;
            }
        }
        else if ((n - a) % 2 == 0 && (a - b) % 2 == 0)
        {

            flag = true;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
