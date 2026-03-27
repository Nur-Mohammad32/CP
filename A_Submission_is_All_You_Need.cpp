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

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x == 0)
            {
                sum += 1;
            }
            else
            {
                sum += x;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
