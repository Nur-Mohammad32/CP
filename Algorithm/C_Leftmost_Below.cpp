#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long mn = v[0];
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] >= 2 * mn)
            {
                flag = false;
                break;
            }
            mn = min(mn, v[i]);
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
