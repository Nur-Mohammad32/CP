#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long total = 0;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
        }

        long long k = sqrt(total);

        if (k * k == total)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
