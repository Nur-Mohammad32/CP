// #include <bits/stdc++.h>
// using namespace std;

// long long sum(int n, int idx, int mx, vector<long long> v)
// {
//     int ans = 0;
//     for (int i = idx + 1; i < n; i++)
//     {
//         ans += mx - v[i];
//     }
//     return ans;
// }

// pair<long long, long long> max_element(int m, vector<long long> v)
// {
//     long long mx = v[0];
//     long long idx = 0;
//     for (int i = 1; i < m; i++)
//     {
//         if (v[i] > mx)
//         {
//             mx = v[i];
//             idx = i;
//         }
//     }
//     return {idx, mx};
// }

// int main()
// {
//     long long n;
//     cin >> n;
//     vector<long long> v(n);

//     for (int i = 0; i < n; i++)
//         cin >> v[i];

//     int m = n;
//     long long final_sum = 0;
//     while (m > 0)
//     {
//         pair<long long, long long> p = max_element(m, v);
//         long long idx = p.first;
//         long long mx = p.second;
//         m = idx - 1;
//         final_sum += sum(m, idx, mx, v);
//     }
//     cout << final_sum << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 0;
    long long mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mx)
            ans += (mx - a[i]);
        else
            mx = a[i];
    }
    cout << ans << endl;
    return 0;
}