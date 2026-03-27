#include <bits/stdc++.h>
#include <algorithm>
#include <initializer_list>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = (k * l) / nl;
    int slice = c * d;
    int salt = p / np;

    int res = min({drink, salt, slice})/n;
    cout << res;

    return 0;
}
