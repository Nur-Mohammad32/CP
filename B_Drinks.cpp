#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double sum = 0.00;
    for (int i = 0; i < n; i++)
    {
        double x = arr[i] / 100.0;
        sum += x;
    }
    // cout << sum;

    double ans = 100 * (sum / n);
    cout << fixed<<setprecision(12)<<ans;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     double sum = 0.0;
//     for (int i = 0; i < n; i++)
//     {
//         int p;
//         cin >> p;
//         sum += p;
//     }

//     cout << fixed << setprecision(12) << (sum / n) << endl;
//     return 0;
// }
