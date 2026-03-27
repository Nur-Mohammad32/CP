#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    float sum = 0;
    while (t--)
    {
        double a, b;
        cin >> a >> b;

        sum += a * b;
    }
    cout << fixed << setprecision(3) << sum << endl;

    return 0;
}
