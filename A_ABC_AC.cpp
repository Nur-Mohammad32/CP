#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int idx = s.size()  / 2;

    for (int i = 0; i < s.size(); i++)
    {
        if(i != idx)
            cout << s[i];
    }

    return 0;
}
