#include <bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if (n == 0)
        return 1;

    long long ans = n * fact(n - 1);
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long ans = fact(n);
        cout << ans % 10 << endl;
    }

    return 0;
}
