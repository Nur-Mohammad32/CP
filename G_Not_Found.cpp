#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    set<int> st;
    for (char c : s)
    {
        st.insert(c - 'a');
    }

    // for (auto x : st)
    //     cout << x << " ";
    // cout << endl;

    int p = -1;
    for (int i = 0; i < 26; i++)
    {
        if (st.find(i) == st.end())
        {
            p = i;
            break;
        }
    }

    if (p == -1)
        cout << "None" << endl;
    else
        cout << char(p + 'a') << endl;

    return 0;
}
