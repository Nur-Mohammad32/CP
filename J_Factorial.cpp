#include <bits/stdc++.h>
using namespace std;

long long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long ans = n * factorial(n - 1);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
    }
    long long int ans = factorial(n);
    cout << ans;

    return 0;
}
