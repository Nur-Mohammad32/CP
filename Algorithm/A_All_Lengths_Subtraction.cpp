#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int a[N];
int position[N];

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            position[a[i]] = i;
        }

        int low_idx = INT_MAX, upp_idx = INT_MIN;
        bool hoise = true;

        for (int t = 1; t <= n; t++)
        {
            int value = n - t + 1;

            int p = position[value];
            if (p < low_idx)
                low_idx = p;

            if (p > upp_idx)
                upp_idx = p;

            if (upp_idx - low_idx + 1 != t)
            {
                hoise = false;
                break;
            }
        }

        if (hoise)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
