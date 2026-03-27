#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> v1(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> v2 = v;
        if (n == 1)
        {
            cout << v[0] << endl;
            continue;
        }

        sort(v.begin(), v.end());
        int mx = v[n - 1];
        int mn = v[0];

        int ans = mx + mn;

        for (int i = 0; i < n; i++)
        {
            v1[i] = ans - v2[i];
        }

        for (int x : v1)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> v(n);
//         vector<int> v1(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         v1 = v;

//         // sort(v1.begin(), v1.end());

//         vector<int> sum(n, 0);

//         for (int i = 0; i < n; i++)
//         {
//             sum[i] = v[i] + v1[i];
//         }

//         int i = 0;
//         while (i < n - 1 && sum[i] > sum[i + 1])
//         {
//             swap(v1[i], v1[i + 1]);
//             if (sum[i] < sum[i + 1])
//                 break;
//             i++;
//         }

//         // for (int i = 1; i < n; i++)
//         // {
//         //     if (sum[i] < sum[i - 1])
//         //         swap(v1[i], v1[i - 1]);

//         //     if (sum[i] > sum[i - 1])
//         //         break;
//         // }

//         // for (int i = 1; i < n; i++)
//         // {
//         //     while (sum[i] < sum[i - 1])
//         //         swap(v1[i], v1[i - 1]);

//         //     if (sum[i] > sum[i - 1])
//         //         break;
//         // }

//         for (int x : v1)
//             cout << x << " ";
//         cout << endl;
//     }

//     return 0;
// }
