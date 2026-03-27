#include <bits/stdc++.h>
using namespace std;

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

void Nur_Md()
{
    int n, m;
    cin >> n >> m;

    vi v(n);
    vi v1(m);
    input_vector(v);
    input_vector(v1);

    int l = 0, r = 0;
    ll ans = 0;
    while (l < n && r < m)
    {
        int curr = v[l], cnt1 = 0, cnt2 = 0;

        while (l < n && v[l] == curr)
        {
            cnt1++;
            l++;
        }
        while (r < m && curr > v1[r])
        {
            r++;
        }
        while (r < m && v1[r] == curr)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << "\n";
}

int main()
{
    fast_io();
    Nur_Md();

    return 0;
}
