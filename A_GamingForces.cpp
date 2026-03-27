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
        {
            cin >> v[i];
        }

        // sort(v.begin(), v.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                count++;
        }

        int ans = 0;
        int ans1 = n - count;
        if (count % 2 == 0)
            ans = ans1 + (count / 2);
        else
            ans = ans1 + (count / 2) + 1;

        cout << ans << endl;
    }

    return 0;
}
