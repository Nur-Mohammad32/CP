#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    bool flag = false;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 's' && s[i + 1] == 's')
        {
            flag = true;
            // cout << "hiss" << endl;
            // break;
        }
        // else
        // {
        //     cout << "no hiss" << endl;
        //     break;
        // }
    }

    if (flag)
        cout << "hiss" << endl;
    else
        cout << "no hiss" << endl;

    return 0;
}
