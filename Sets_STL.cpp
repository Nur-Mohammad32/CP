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
#define yes_no(ok) cout << ((ok) ? "Yes" : "No") << "\n"

void Nur_Md()
{
    int q;
    cin >> q;
    set<int> s;

    while (q--)
    {
        ll type, x;
        cin >> type >> x;

        if (type == 1)
            s.insert(x);
        else if (type == 2)
            s.erase(x);
        else if (type == 3)
        {
            bool ok = s.find(x) != s.end();
            yes_no(ok);
        }
            
    }
}

int main()
{
    fast_io();
    Nur_Md();
    return 0;
}
