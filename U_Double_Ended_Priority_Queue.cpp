#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define mod 1000000007
#define INF 1000000000000000003

#define ll long long
#define pb push_back
#define vi vector<int>
#define PRINT(a) for (auto x : a) cout << x << "\n";

void Nur_Md()
{
    int N, Q;
    cin >> N >> Q;

    multiset<ll> S;
    for (int i = 0; i < N; i++)
    {
        ll x;
        cin >> x;
        S.insert(x);
    }

    vector<ll> output; // to store answers

    for (int i = 0; i < Q; i++)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            ll x;
            cin >> x;
            S.insert(x);
        }
        else if (type == 1)
        {
            auto it = S.begin(); // minimum element
            output.pb(*it);
            S.erase(it);
        }
        else if (type == 2)
        {
            auto it = prev(S.end()); // maximum element
            output.pb(*it);
            S.erase(it);
        }
    }

    PRINT(output);
}

int main()
{
    fast_io();
    Nur_Md();
    return 0;
}
