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
    int n;
    cin >> n;

    string s;
    cin >> s;


    map<string, int> mp;
    for_0(i, n-1)
    {
        string s1 = "";
        s1 += s[i];
        s1 += s[i + 1];
        mp[s1]++;
    }

    string s2 = "";
    int cnt = 0;

    for(auto x : mp)
    {
        if(x.second > cnt)
        {
            cnt = x.second;
            s2 = x.first;
        }

    }
    cout << s2;
        nl;
}

int main()
{
    fast_io();
    Nur_Md();
    return 0;
}
