#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> pref_sum1(n);
    vector<int> pref_sum2(n);

    pref_sum1[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pref_sum1[i] = pref_sum1[i - 1] + v[i];
    }

    pref_sum2[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        pref_sum2[i] = pref_sum2[i + 1] + v[i];
    }

    int idx = -1;
    for (int i = 1; i < n-1; i++)
    {
        if (pref_sum1[i] == pref_sum2[i])
        {
            idx = i;
            break;
        }
    }
    cout << idx;

    return 0;
}
