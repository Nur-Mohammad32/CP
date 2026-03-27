#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 0, 3, 2, 0, 2, 5};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            v.push_back(x);
        }

        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i] == v1[j])
                {
                    v2.push_back(i);
                }
            }
        }

        for (int p : v2)
        {
            cout << p << " ";
        }
    }

    return 0;
}
