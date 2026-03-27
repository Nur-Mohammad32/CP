#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int l = s.length();
    bool flag = true;
    int i = 0;
    int j = l-1;
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            flag = false;
        }
        i++;
        j--;
    }
    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
