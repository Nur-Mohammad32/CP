#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<string>> player(3, vector<string>(n));
        map<string, int> mp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> player[i][j];
                mp[player[i][j]]++;
            }
        }
        vector<int> v(3, 0);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word = player[i][j];
                if (mp[word] == 1)
                    v[i] += 3;
                else if (mp[word] == 2)
                    v[i] += 1;
            }
        }
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }

    return 0;
}
