#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define mod 1000000007
#define INF 1000000000000000003

#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define pob pop_back
#define mp make_pair
#define f first
#define s second

#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>

#define for_0(a, b) for (int i = 0; i < b; i++)
#define for_1st(i, a, b) for (int i = a; i <= b; i++)
#define for_LAST(i, b, c) for (int i = c; i >= b; i--)
#define PRINT(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << '\n';
#define input_vector(v) \
    for (auto &x : v)   \
        cin >> x;

#define nl "\n"
#define yes_no cout << (ok ? "YES" : "NO") << "\n"

void Nur_Md()
{
    int n, q;
    cin >> n >> q;

    vi v(n);
    input_vector(v);

    vll pref(n + 1, 0);
    vi pmax(n);

    for_0(i, n)
    {
        pref[i + 1] = pref[i] + v[i];
        if (i == 0)
            pmax[i] = v[i];
        else
            pmax[i] = max(pmax[i - 1], v[i]);
    }

    for_0(i, q)
    {
        int k;
        cin >> k;

        int idx = upper_bound(all(pmax), k) - pmax.begin();
        cout << pref[idx] << " ";
    }
    cout << nl;
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
