#include <bits/stdc++.h>
using namespace std;

char small_to_capital(char ch)
{
    int x = int(ch);
    x = x - 32;
    return char(x);
}

int main()
{
    char ch;
    cin >> ch;

    char x = small_to_capital(ch);
    cout << x;

    return 0;
}
