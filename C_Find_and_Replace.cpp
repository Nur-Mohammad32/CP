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

        vector<int> mp(26, -1);
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            int c = s[i] - 'a';
            int parity = i % 2;

            if (mp[c] == -1)
            {
                mp[c] = parity;
            }
            else if (mp[c] != parity)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
