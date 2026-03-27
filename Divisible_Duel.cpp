#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        vector<int> s1;
        vector<int> s2;

        for (int i = x; i <= y; i += x)
        {
            if (i % 2 == 0)
            {
                s1.push_back(i);
            }
            else
            {
                s2.push_back(i);
            }
        }

        int sum_even = 0, sum_odd = 0;
        for (int x : s1)
            sum_even += x;
        for (int x : s2)
            sum_odd += x;

        if (sum_even >= sum_odd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
