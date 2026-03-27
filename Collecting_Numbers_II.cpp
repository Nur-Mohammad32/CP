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
    int n, m;
    cin >> n >> m;

    set<int> s;
    vector<int> pos(n + 2, INT_MAX);
    ll a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (pos[a[i] - 1] > i)
            s.insert(a[i]);
        pos[a[i]] = i;
    }

    for (int i = 1; i <= m; i++)
    {
        ll x, y;
        cin >> x >> y;

        if (pos[a[x]] < pos[a[x] - 1])
            s.erase(a[x]);
        if (pos[a[x] + 1] < pos[a[x]])
            s.erase(a[x] + 1);
        if (pos[a[y]] < pos[a[y] - 1])
            s.erase(a[y]);
        if (pos[a[y] + 1] < pos[a[y]])
            s.erase(a[y] + 1);

        swap(a[x], a[y]);
        swap(pos[a[x]], pos[a[y]]);

        if (pos[a[x]] < pos[a[x] - 1])
            s.insert(a[x]);
        if (pos[a[x] + 1] < pos[a[x]])
            s.insert(a[x] + 1);
        if (pos[a[y]] < pos[a[y] - 1])
            s.insert(a[y]);
        if (pos[a[y] + 1] < pos[a[y]])
            s.insert(a[y] + 1);

        cout << s.size() << '\n';
    }

    
}

int main()
{
    fast_io();

    Nur_Md();

    return 0;
}
