// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, s;
//         cin >> n >> s;

//         int arr[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (n == 1)
//             {
//                 cout << abs(s - arr[0]) << endl;
//                 break;
//             }
//             else if (n == 2)
//             {
//                 if (s >= arr[1])
//                 {
//                     cout << abs(s - arr[0]) << endl;
//                     break;
//                 }
//                 else if (s < arr[1] && s > arr[0])
//                 {
//                     int ans1 = s - arr[0];
//                     int ans2 = arr[1] - s;
//                     int ans3 = min(ans1, ans2);
//                     int ans = ans3 + (arr[1] - arr[0]);
//                     cout << ans << endl;
//                     break;
//                 }
//                 else
//                 {
//                     cout << abs(s - arr[1]) << endl;
//                     break;
//                 }
//             }
//             else
//             {
//                 if (s >= arr[n - 1])
//                 {
//                     cout << abs(s - arr[0]) << endl;
//                 }
//                 else if (s > arr[0] && s < arr[n - 1])
//                 {
//                     int ans1 = s - arr[0];
//                     int ans2 = arr[n - 1] - s;
//                     int ans3 = min(ans1, ans2);

//                     int ans4 = arr[n - 1] - arr[0];
//                     int ans = ans4 + ans3;
//                     cout << ans << endl;
//                     break;
//                 }
//                 else
//                 {
//                     cout << abs(s - arr[0]) << endl;
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int L = arr[0];
        int R = arr[n - 1];

        int steps;
        if (n == 1 && arr[0] == s)
            steps = 0;
        else
            steps = (R - L) + min(abs(s - L), abs(s - R));

        cout << steps << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, s;
//         cin >> n >> s;
//         vector<int> x(n);
//         for (int i = 0; i < n; i++)
//             cin >> x[i];
//         int ans = min(abs(s - x[0]), abs(s - x.back())) + x.back() - x[0];
//         cout << ans << '\n';
//     }
//     return 0;
// }
