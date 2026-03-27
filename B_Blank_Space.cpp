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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int count = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                count++;
                mx = max(mx, count);
            }
            else
            {
                count = 0;
            }
        }

        cout << mx << endl;
    }

    return 0;
}
