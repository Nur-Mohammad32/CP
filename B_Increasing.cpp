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
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<long long> s(a.begin(), a.end());

        if (s.size() == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
//         if (n == 1)
//         {
//             cout << "YES" << endl;
//             continue;
//         }

//         vector<long long> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         map<long long, long long> mp;
//         for (long long x : v)
//             mp[x]++;

//         bool flag = true;
//         for (auto x : mp)
//         {
//             if (x.second > 1)
//                 flag = false;
//         }

//         if (flag)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }
