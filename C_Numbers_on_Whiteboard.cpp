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
    int n;
    cin >> n;

    vi v;
    for_1st(i, 1, n)
    {
        v.push_back(i);
    }

    vector<pair<int, int>> v1;
    while (v.size() > 1)
    {
        int x = v.back();
        v.pop_back();
        int y = v.back();
        v.pop_back();
        v1.push_back({x, y});
        int p = (x + y + 1) / 2;
        v.push_back(p);
    }

    cout << 2 << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i].first << " " << v1[i].second << endl;
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
