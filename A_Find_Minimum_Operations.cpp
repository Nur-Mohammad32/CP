#include <bits/stdc++.h>
using namespace std;

int minOperations(int n, int k)
{
    int count = 0;
    while (n > 0)
    {
        count += n % k;
        n /= k;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << minOperations(n, k) << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int result(int n, int k)
// {
//     int count = 0;

//     while (n > 0)
//     {
//         int x = 0;
//         while (pow(k, x + 1) <= n)
//         {
//             x++;
//         }

//         n -= pow(k, x);
//         count++;
//     }

//     return count;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//         if (k == 1)
//         {
//             cout << n << endl;
//         }
//         else
//         {
//             cout << result(n, k) << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// long long result(long long n, long long k)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (k == 1)
//     {
//         return n;
//     }

//     long long i = 0;
//     while (pow(k, i) <= n)
//     {
//         i++;
//     }

//     long long res = pow(k, i - 1);
//     return 1 + result(n - res, k);
// }

// int main()
// {
//     long long t;
//     cin >> t;

//     while (t--)
//     {
//         long long n, k;
//         cin >> n >> k;

//         long long ans = result(n, k);
//         cout << ans << endl;
//     }

//     return 0;
// }
