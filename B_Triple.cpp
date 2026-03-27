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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, int> freq;
        int ans = -1;
        for (int x : a)
        {
            freq[x]++;
            if (freq[x] == 3)
            {
                ans = x;
                break;
            }
        }

        cout << ans << endl;
    }
}
