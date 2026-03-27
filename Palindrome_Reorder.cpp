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
    string s;
    cin >> s;

    map<char, int> mp;
    for (char c : s)
        mp[c]++;

    string s1 = "", s2 = "";

    for (auto x : mp)
    {
        if (x.second % 2 == 1)
        {
            if (!s2.empty())
            {
                cout << "NO SOLUTION";
                nl;
                return;
            }
            s2 = x.first;
        }

        for (int i = 0; i < x.second / 2; i++)
            s1 += x.first;
    }

    string s3 = s1;
    reverse(s3.begin(), s3.end());

    string ans = s1 + s2 + s3;
    cout << ans;
    nl;
}

int main()
{
    fast_io();
    Nur_Md();
    return 0;
}
