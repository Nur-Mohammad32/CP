#include <bits/stdc++.h>
using namespace std;

int char_to_asci(char ch)
{
    int x = int(ch);
    return x;
}

int main()
{
    char ch;
    cin >> ch;

    int x = char_to_asci(ch);
    cout << x;

    return 0;
}
