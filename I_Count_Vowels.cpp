#include <bits/stdc++.h>
using namespace std;

int count_character(string s,int i)
{
    if(s[i]=='\0')
    {
        return 0;
    }
    int count = count_character(s, i + 1);
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    string s;
    getline(cin, s);

    int ans = count_character(s, 0);
    cout << ans;

    return 0;
}
