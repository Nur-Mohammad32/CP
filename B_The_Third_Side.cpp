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

        sort(v.begin(), v.end());

        int l = v.size();

        for (int i = 0; i < l; i++)
        {
            while (l != 1)
            {
                int sum = 0;
                sum = v[l - 1] + v[l - 2] - 1;
                v[l - 2] = sum;
                l--;
            }
            
        }
        cout << v[0] << endl;
    }

    return 0;
}
