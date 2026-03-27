#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define pb push_back
#define ll long long
#define vll vector<long long>
#define input_vector(v) \
    for (auto &x : v)   \
        cin >> x;

void Nur_Md()
{
    ll n, x, y;
    cin >> n >> x >> y;

    vll a(n);
    input_vector(a);

    ll sum = 0;
    for (ll i = 0; i < n; i++)
        sum += a[i];

    pbds<ll> pb;
    ll ans = 0;

    for (ll j = 0; j < n; j++)
    {
        ll p = pb.order_of_key(y + a[j] - sum + 1);
        ll q = pb.order_of_key(x + a[j] - sum);
        ans += (p - q);
        pb.insert(-a[j]);
    }
    cout << ans << "\n";
}

int main()
{
    fast_io();
    ll t;
    cin >> t;
    while (t--)
    {
        Nur_Md();
    }
    return 0;
}


