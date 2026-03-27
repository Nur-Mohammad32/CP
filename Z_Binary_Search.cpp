#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--)
    {

        long long int X;
        cin >> X;

        long long int l = 0, r = n - 1;
        bool flag = false;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == X)
            {
                flag = true;
                break;
            }

            if (X > v[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (flag==true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
