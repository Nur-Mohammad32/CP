#include <bits/stdc++.h>
using namespace std;

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
#define vll vector<long long>
#define pi pair<int,int>

#define for_0(i, n) for (int i = 0; i < n; i++)
#define for_1st(i, a, b) for (int i = a; i <= b; i++)
#define for_LAST(i, b, c) for (int i = c; i >= b; i--)
#define PRINT(a) for (auto x : a) cout << x << "\n";
#define input_vector(v) for (auto &x : v) cin >> x;
#define nl cout << "\n"

void Nur_Md()
{
    int n, q;
    cin >> n >> q;

    multiset<ll> ml;
    for_0(i, n)
    {
        ll x;
        cin >> x;
        ml.insert(x);
    }
    vll v;

    for_0(i, q)
    {
        int t;
        cin >> t;

        if (t == 0)
        {
            ll x;
            cin >> x;
            ml.insert(x);
        }
        else if (t == 1)
        {
            auto it = ml.begin();
            v.pb(*it);
            ml.erase(it);
        }
        else if (t == 2)
        {
            auto it = prev(ml.end());
            v.pb(*it);
            ml.erase(it);
        }
    }
    PRINT(v);
}

int main()
{
    fast_io();
    Nur_Md();
    return 0;
}
