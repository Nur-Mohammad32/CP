#include <bits/stdc++.h>
using namespace std;

char capital_to_small(char ch)
{
    int x = int(ch);
    x = x + 32;
    return char(x);
}

int main()
{
    char ch;
    cin >> ch;

    char x = capital_to_small(ch);
    cout << x;

    return 0;
}
