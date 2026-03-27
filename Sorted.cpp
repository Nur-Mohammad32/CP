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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<int> s(v.begin(), v.end());

        for (auto val : s)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
