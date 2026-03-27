#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s1 = "I hate";
    string s2 = "I love";

    string s = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            s = s + s1;
        }
        else
        {
            s = s + s2;
        }
        if (i != n)
        {
            s += " that ";
        }
    }
    s += " it";
    cout << s;

    return 0;
}
