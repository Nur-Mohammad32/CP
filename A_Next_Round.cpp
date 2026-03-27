#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int count = 0;
    int ks = v[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= ks && v[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
