#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long even = 0, odd = 0;
        long long es = 0, os = 0;
        vector<long long> v1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                es += v[i];
                even++;
            }
            else
            {
                os += v[i];
                odd++;
                v1.push_back(v[i]);
            }
        }

        sort(v1.begin(), v1.end(), greater<long long>());
        long long extra = 0;

        int p = v1.size();
        for (int i = p - p / 2; i < p; i++)
        {
            extra += v1[i];
        }

        long long ans = es + os - extra;
        if (v1.empty())
            cout << 0 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
