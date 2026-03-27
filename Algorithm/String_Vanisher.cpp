#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        string s;
        cin >> n >> s;

        int x = 0;
        while (n > 0)
        {
            n /= 2;
            x++;
        }
        cout << x << endl;
    }
    return 0;
}
