#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.rbegin(), v.rend());
        int saved = 0;
        int multiplier = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] * multiplier <= c)
            {
                saved++;
                multiplier *= 2;
            }
        }
        cout << n - saved << endl;
    }

    return 0;
}
