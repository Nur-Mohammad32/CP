#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
#define yes_no cout << (ok ? "YES" : "NO") << "\n"

void Nur_Md()
{
    int n, k;
    cin >> n >> k;
    vi tree(n), height(n);

    input_vector(tree);
    input_vector(height);

    int ml = 0, sum = 0, l = 0;
    for_1st(i, 0, n - 1)
    {
        sum += tree[i];
        if (i > 0 && height[i - 1] % height[i] != 0)
        {
            l = i;
            sum = tree[i];
        }

        while (sum > k)
        {
            sum -= tree[l];
            l++;
        }
        ml = max(ml, i - l + 1);
    }
    cout << ml << '\n';
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
