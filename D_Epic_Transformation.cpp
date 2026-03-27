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
#define cnt make_pair
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

    map < int, int>cnt;
    for_1st(i,1,n)
    {
        int x;
        cin>>x;
        cnt[x]++;
    }

    priority_queue<int> pq;
    for(auto [x,y] : cnt)
    {
        pq.push(y);
    }

    while(!pq.empty())
    {
        if(pq.size() < 2)
            break;

        int x, y;
        x = pq.top();
        pq.pop();

        y=pq.top();
        pq.pop();

        x--;
        y--;

        if(x>0)
            pq.push(x);
        if(y>0)
            pq.push(y);
    }

    int ans = 0;
    while(!pq.empty())
    {
        int x = pq.top();
        ans += x;
        pq.pop();
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
