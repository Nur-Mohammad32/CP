#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.size() != s2.size())
        {
            cout << "NO" << endl;
            continue;
        }

        int count1[26] = {0}, count2[26] = {0};
        for (char c : s1)
            count1[c - 'a']++;
        for (char c : s2)
            count2[c - 'a']++;

        bool flag = true;
        for (int i = 0; i < 26; ++i)
        {
            if (count1[i] != count2[i])
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
