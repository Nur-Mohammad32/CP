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
#define yes_no cout << (ok ? "YES" : "NO") << "\n"

void Nur_Md()
{
    long long n;
    int m, q;
    cin >> n >> m >> q;

    vi tchr(m);
    for_0(i, m)
            cin >>tchr[i];

    sort(all(tchr));

    for_0(i, q)
    {
        long long d;
        cin >> d;

        if (d < tchr[0])
            cout << tchr[0] - 1 << "\n";
        else if (d > tchr.back())
            cout << n - tchr.back() << "\n";
        else
        {
            auto it = lower_bound(all(tchr), d);
            long long r_t = *it;
            long long l_t = *(it - 1);
            cout << (r_t - l_t) / 2 << "\n";
        }
    }
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
