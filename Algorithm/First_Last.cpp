#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, long long> &x, pair<long long, long long> &y)
{
    if (x.first != y.first)
        return x.first < y.first;
    return x.second < y.second;
}

int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<long long, long long>> v;
    for (long long i = 0; i < n; i++)
        v.push_back({a[i], i + 1});

    sort(v.begin(), v.end(), cmp);

    long long idx = 0;
    while (idx < n)
    {
        long long val = v[idx].first;
        long long f = v[idx].second;
        long long l = v[idx].second;

        while (idx + 1 < n && v[idx + 1].first == val)
        {
            l = v[idx + 1].second;
            idx++;
        }

        cout << val << " " << f << " " << l << endl;
        idx++;
    }
    return 0;
}
