#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ca = 0;
    int cd = 0;
    for (int i = 0; i < s.size();i++)
    {
        if(int(s[i]==65))
        {
            ca++;
        }
        else
        {
            cd++;
        }
    }

    if(cd>ca)
    {
        cout << "Danik";
    }
    else if(ca>cd)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Friendship";
    }
        return 0;
}
