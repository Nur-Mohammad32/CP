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

#define nl cout << "\n"
#define yes_no cout << (ok ? "YES" : "NO") << "\n"

ll GCD(ll a, ll b)
{ 
   return __gcd(a, b);
}

ll LCM(ll a,ll b)
{
    return ((a / __gcd(a, b)) * b);
}

void Nur_Md()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
    ll ans = (((x + y) - overlap * (p + q))) + (overlap * max(p, q));
    cout << ans << '\n';
}

int main()
{
    fast_io();
    
    Nur_Md();
    
    return 0;
}
