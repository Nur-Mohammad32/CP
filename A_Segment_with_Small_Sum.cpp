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
    int n;
    ll s;
    cin >>n>> s;

    vi v(n);
    input_vector(v);

    int l = 0, r = 0;
    ll sum = 0;
    int ans = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout << ans << '\n';
}

int main()
{
    fast_io();
    Nur_Md();

    return 0;
}
