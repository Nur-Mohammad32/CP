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
        string s;
        cin >> s;

        int mx = -1;
        for (char c : s)
        {
            int x = c - 'a';
            mx = max(x, mx);
        }
        cout << mx + 1 << endl;
    }

    return 0;
}
