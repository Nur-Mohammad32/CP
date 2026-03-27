#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c == 'z')
    {
        cout << "a";
    }
    else
    {
        int x = int(c) + 1;

        char p = char(x);
        cout << p;
    }

    return 0;
}
