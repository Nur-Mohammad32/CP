
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#define ll long long
#define vll vector<long long>

#define input_vector(v) \
    for (auto &x : v)   \
        cin >> x;
ll count_leq(vll &v, ll X)
{
    ll n = v.size();
    ll i = 0, j = n - 1;
    ll cnt = 0;

    while (i < j)
    {
        if (v[i] + v[j] <= X)
        {
            cnt += (j - i);
            i++;
        }
        else
        {
            j--;
        }
    }
    return cnt;
}

void Nur_Md()
{
    ll n, l, r;
    cin >> n >> l >> r;

    vll v(n);
    input_vector(v);

    sort(v.begin(), v.end());

    ll ans = count_leq(v, r) - count_leq(v, l - 1);
    cout << ans << "\n";
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        Nur_Md();
    }
    return 0;
}


// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// #define fast_io()                \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);
// #define mod 1000000007
// #define INF 1000000000000000003

// #define ll long long
// #define ull unsigned long long
// #define ld long double

// #define pb push_back
// #define pob pop_back
// #define mp make_pair
// #define f first
// #define s second

// #define all(x) (x).begin(), (x).end()
// #define vi vector<int>
// #define vll vector<long long>
// #define pi pair<int, int>

// #define for_0(a, b) for (int i = 0; i < b; i++)
// #define for_1st(i, a, b) for (int i = a; i <= b; i++)
// #define for_LAST(i, b, c) for (int i = c; i >= b; i--)
// #define PRINT(a)          \
//     for (auto x : a)      \
//         cout << x << " "; \
//     cout << '\n';
// #define input_vector(v) \
//     for (auto &x : v)   \
//         cin >> x;

// #define nl "\n"
// #define yes_no cout << (ok ? "YES" : "NO") << "\n"

// void Nur_Md()
// {
//     ll n, l, r;
//     cin >> n >> l >> r;

//     vll v(n);
//     input_vector(v);

//     sort(v.begin(), v.end());

//     int i = 0, j = n - 1;
//     ll cnt = 0;
//     while(i<j)
//     {
//         if(v[i]+v[j] <l)
//         {
//             cnt += (j - i);
//             i++;
//         }
//         else
//             j--;
//     }

//     ll cnt2 = 0;
//     while(i<j)
//     {
//         if(v[i]+v[j] <l)
//         {
//             cnt2 += (j - i);
//             i++;
//         }
//         else
//             j--;
//     }


// }

// int main()
// {
//     fast_io();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         Nur_Md();
//     }

//     return 0;
// }
