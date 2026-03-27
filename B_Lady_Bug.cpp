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
#define ha cout << "YES";
#define na cout << "NO";

void Nur_Md()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int cnt1 = 0, cnt2 = 0;

    for_0(i, n)
    {
        if (i % 2 == 0)
        {
            if(a[i] == '0')
                cnt1++;
            if(b[i] == '0')
                cnt2++;
        }
        else
        {
            if(a[i] == '0')
                cnt2++;
            if(b[i] == '0')
                cnt1++;
        }
    }

    if (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2)
        ha
    else
        na

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
