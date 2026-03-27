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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i = 0;
        int count = 0;
        while (i <= n - k)
        {
            bool flag = true;
            for (int j = i; j < i + k; j++)
            {
                if (v[j] != 0)
                {
                    flag = false;
                    i = j + 1;
                    break;
                }
            }
            if (flag)
            {
                count += 1;
                i = i + k + 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}
