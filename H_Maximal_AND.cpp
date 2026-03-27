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

#define nl cout << "\n"
#define yes_no cout << (ok ? "YES" : "NO") << "\n"
const int B = 30;

void Nur_Md()
{
    int n, op;
    cin >> n >> op;

    vi v(n);
    input_vector(v);

    vi bits(B + 1);
    for_0(i, n)
    {
        for (int k = B; k >= 0; k--)
        {
            if ((v[i] >> k) & 1)
            {
                bits[k]++;
            }
        }
    }

    int ans = 0;
    for (int k = B; k >= 0; k--)
    {
        if (bits[k] == n)
        {
            ans += (1LL << k);
        }
        else
        {
            int need = n - bits[k];
            if (op >= need)
            {
                ans += (1LL << k);
                op -= need;
            }
        }
    }
    cout << ans << '\n';
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
