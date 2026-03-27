#include <bits/stdc++.h>
using namespace std;
int dp[25];

long long fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    long long ans = fact(n - 1) * n;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
