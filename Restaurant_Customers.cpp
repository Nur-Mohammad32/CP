#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
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
#define pi pair<int,int>

#define for_0(a, b) for (int i = 0; i < b; i++)
#define for_1st(i, a, b) for (int i = a; i <= b; i++)
#define for_LAST(i, b, c) for (int i = c; i >= b; i--)
#define PRINT(a) for (auto x : a) cout << x << " "; cout << '\n';
#define input_vector(v) for (auto &x : v) cin >> x;

#define nl "\n"
#define yes_no cout << (ok ? "YES" : "NO") << "\n"


void Nur_Md()
{
    ll n;
    cin >> n;

    map<int, int> mp;
    for (int i = 1; i <= n;i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }

    int cnt = 0, ans = 0;
    for (auto [f, s]: mp)
    {
        cnt += s;
        ans = max(ans, cnt);
    }
    cout << ans << nl;
}

int main()
{
    fast_io();
    
    Nur_Md();
    
    return 0;
}
