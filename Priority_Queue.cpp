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
#define vi vector<int>
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

    vector<priority_queue<int>> pq(n);
    vi v;

    for_0(i, q)
    {
        int p, t;
        cin >> p >> t;

        if (p == 0)
        {
            int x;
            cin >> x;
            pq[t].push(x);
        }
        else if (p == 1)
        {
            if (!pq[t].empty())
                v.pb(pq[t].top());
        }
        else if (p == 2)
        {
            if (!pq[t].empty())
                pq[t].pop();
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
