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

        for (int i = 0; i < n; ++i)
            cin >> v[i];

        long long m1 = LLONG_MIN;
        long long m2 = LLONG_MIN;
        int i1 = -1;
        int i2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > m1)
            {
                m2 = m1;
                i2 = i1;
                m1 = v[i];
                i1 = i;
            }
            else if (v[i] > m2)
            {
                m2 = v[i];
                i2 = i;
            }
        }

        int a = min(i1, i2);
        int b = max(i1, i2);
        cout << a << ' ' << b << endl;
    }
    return 0;
}
