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
        vector<long long> v1(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        v1 = v;

        sort(v.rbegin(), v.rend());
        long long fst = v[0];
        long long scnd = v[1];

        for (long long i = 0; i < v1.size(); i++)
        {
            if (v1[i] == fst)
                v1[i] -= scnd;
            else
                v1[i] -= fst;
        }

        for (long long x : v1)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
