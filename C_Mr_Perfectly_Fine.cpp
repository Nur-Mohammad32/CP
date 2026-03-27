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

        vector<int> v1, v2, v3, v4;

        for (int i = 0; i < n; i++)
        {
            int m;
            string s;
            cin >> m >> s;

            if (s == "00")
                v1.push_back(m);
            else if (s == "01")
                v2.push_back(m);
            else if (s == "10")
                v3.push_back(m);
            else if (s == "11")
                v4.push_back(m);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());
        sort(v4.begin(), v4.end());

        int ans = INT_MAX;

        if (!v4.empty())
            ans = min(ans, v4[0]);
        if (!v2.empty() && !v3.empty())
            ans = min(ans, v2[0] + v3[0]);

        if (ans == INT_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
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

//         vector<pair<int, int>> v;
//         vector<pair<int, int>> v1; // 00
//         vector<pair<int, int>> v2; // 01
//         vector<pair<int, int>> v3; // 10
//         vector<pair<int, int>> v4; // 11

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i].first >> v[i].second;

//             if (v[i].second == 00)
//             {
//                 v1[i].first = v[i].first;
//                 v1[i].second = v[i].second;
//             }
//             else if (v[i].second == 01)
//             {
//                 v2[i].first = v[i].first;
//                 v2[i].second = v[i].second;
//             }
//             else if (v[i].second == 10)
//             {
//                 v3[i].first = v[i].first;
//                 v3[i].second = v[i].second;
//             }

//             else
//             {
//                 v4[i].first = v[i].first;
//                 v4[i].second = v[i].second;
//             }
//         }

//         sort(v1.begin(), v1.end());
//         sort(v2.begin(), v2.end());
//         sort(v3.begin(), v3.end());
//         sort(v4.begin(), v4.end());

//     }

//     return 0;
// }
