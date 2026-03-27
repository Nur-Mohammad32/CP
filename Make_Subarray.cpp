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

        int fst_idx = -1;
        int scnd_idx = -1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                fst_idx = i;
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                scnd_idx = i;
                break;
            }
        }

        if (fst_idx == -1)
        {
            cout << 0 << endl;
            continue;
        }

        int count = 0;
        for (int i = fst_idx; i <= scnd_idx; i++)
        {
            if (s[i] == '0')
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
