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

#define for_0(a, b) for (int i = 0; i < b; i++)
#define for_1st(i, a, b) for (int i = a; i <= b; i++)
#define for_LAST(i, b, c) for (int i = c; i >= b; i--)
#define PRINT(a) for (auto x : a) cout << x << " "; cout << '\n';
#define input_vector(v) for (auto &x : v) cin >> x;

#define nl cout << "\n"

void Nur_Md()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vi v;
    for_0(i,n)
    {
        if(s[i]=='1')
            v.push_back(i);
    }
    if(v.empty())
    {
        cout << 0;
        nl;
        return;
    }

    int ans = 1;
    int x = v[0];

    for (int i = 1; i < v.size();i++)
    {
        if(v[i]-x >=k)
        {
            ans++;
            x = v[i];
        }
    }
    cout << ans;
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





