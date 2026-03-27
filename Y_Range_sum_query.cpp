#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> v(n);
    
    v[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        v[i] = a[i] + v[i - 1];
    }

    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum = 0;
        if (l == 0)
        {
            sum = v[r];
        }
        else
        {
            sum = v[r] - v[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int n, q;
//     cin >> n >> q;
//     long long int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     long long int v[n];
//     v[0] = a[0];

//     for (int i = 1; i < n; i++)
//     {
//         v[i] = a[i] + v[i - 1];
//     }

//     while (q--)
//     {
//         long long int l, r;
//         cin >> l >> r;
//         l--;
//         r--;
//         long long int sum = 0;
//         if (l == 0)
//         {
//             sum = v[r];
//         }
//         else
//         {
//             sum = v[r] - v[l - 1];
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     while (q--)
//     {
//         int l, r;
//         cin >> l >> r;
//         l--;
//         r--;
//         int sum = 0;
//         for (int i = l; i <= r; i++)
//         {
//             sum += a[i];
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }
