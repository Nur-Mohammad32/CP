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
#define ch make_pair
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

void Nur_Md()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> st;
    for (auto c : s)
        st.insert(c);

    vector<char> v;
    for (auto c : st)
        v.pb(c);

    char ch[26];
    
    for_0(i, 26)
        ch[i] = 0;

    for (int i = 0; i < v.size(); i++)
        ch[v[i] - 'a'] = v[v.size() - 1 - i];
    

    string a = "";
    for (auto c : s)
        a += ch[c - 'a'];

    cout << a;
    nl;
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
