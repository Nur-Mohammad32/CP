#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int d1 = n / 100;
    n %= 100;

    int d2 = n / 20;
    n %= 20;

    int d3 = n / 10;
    n %= 10;

    int d4 = n / 5;
    n %= 5;

    int d5 = n;

    cout << d1 + d2 + d3 + d4 + d5 << endl;

    return 0;
}
