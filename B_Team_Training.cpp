#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end(), greater<int>());

        int sz = 0;      //size
        int st = 0;      //strength
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            sz++;
            st = sz * v[i];

            if (st >= x)
            {
                count++;
                sz = 0;
                st = 0;
            }
        }
        cout << count << endl;
    }

    return 0;
}
