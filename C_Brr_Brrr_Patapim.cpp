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

        vector<vector<int>> v(n + 1, vector<int>(n + 1));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> v[i][j];
            }
        }

        vector<int> p(2 * n + 1);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                p[i + j] = v[i][j];
            }
        }

        unordered_set<int> s;
        for (int x : p)
        {
            s.insert(x);
        }

        int missing = -1;
        for (int i = 1; i <= 2 * n; i++)
        {
            if (s.find(i) == s.end())
            {
                missing = i;
                break;
            }
        }

        p[1] = missing;

        for (int i = 1; i < p.size(); i++)
            cout << p[i] << " ";
        cout << endl;
    }

    return 0;
}
