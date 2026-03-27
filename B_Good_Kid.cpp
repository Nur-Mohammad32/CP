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

        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        v[0] += 1;

        long long total = 1;
        for (int x : v)
        {
            total *= x;
        }
        cout << total << endl;
    }
    return 0;
}

