#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int l = s.size();

        vector<char> v;
        for (int i = 0; i < l - 2; i++)
            v.push_back(s[i]);

        v.push_back('i');
        for (char c : v)
            cout << c;
        cout << endl;
    }

    return 0;
}
