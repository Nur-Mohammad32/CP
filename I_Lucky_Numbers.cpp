#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d1 = n % 10;
    n /= 10;
    int d2 = n;

    if (d1 % d2 == 0 || d2 % d1 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
