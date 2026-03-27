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
#define vll vector<long long>
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
    int n, m;
    cin >> n >> m;

    vll tp(n), cb(m);
    for (int i = 0; i < n; i++)
        cin >> tp[i];
    for (int i = 0; i < m; i++)
        cin >> cb[i];

    sort(tp.begin(), tp.end());

    multiset<int> st;
    for (int i = 0; i < n; i++)
        st.insert(tp[i]);

    for (int i = 0; i < m; i++)
    {
        int bgt = cb[i];
        auto it = st.lower_bound(bgt + 1);

        if (it == st.begin())
            cout << -1 << "\n";
        else
        {
            it--;
            cout << *it << "\n";
            st.erase(it);
        }
    }
}

int main()
{
    fast_io();
    Nur_Md();
    return 0;
}
