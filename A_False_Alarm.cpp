#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count_1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count_1++;
            }
        }

        int idx_f = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                idx_f = i;
                break;
            }
        }

        int idx_l = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                idx_l = i;
                break;
            }
        }

        bool flag = true;
        int time = idx_l - idx_f + 1;
        if (x < time)
        {
            flag = false;
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
