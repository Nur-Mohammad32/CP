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
    int m, n;
    cin >> m >> n;

    vector<tuple<int, int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }

    vector<int> can(n);

    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;

        for (int i = 0; i < n; i++)
        {

            tuple<int, int, int> T = a[i];

            int t, z, y, total, full, remaining, curr;

            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);

            total = (t * z) + y;

            full = mid / total;
            remaining = mid % total;

            curr = (full * z) + min(z, (remaining / t));
            curr = min(has, curr);

            has -= curr;
            may[i] = curr;
        }

        if (!has)
        {
            for (int i = 0; i < n; i++)
            {
                can[i] = may[i];
            }
        }

        return (!has);
    };

    int l = 0, r = 1e8, mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    ok(ans);

    cout << ans << '\n';
    for (auto val : can)
    {
        cout << val << " ";
    }
    cout << '\n';
}

int main()
{
    fast_io();

    Nur_Md();

    return 0;
}
