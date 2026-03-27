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

const int maxN = 1 << 15;
int cnt[maxN];
vector<int> allPalindrome;

bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1])
            return false;
    return true;
}

void markPalindrome()
{
    allPalindrome.clear();
    for (int i = 0; i < maxN; i++)
        if (isPalindrome(i))
            allPalindrome.push_back(i);
}

void Nur_Md()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < maxN; i++)
        cnt[i] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    long long ans = n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < (int)allPalindrome.size(); j++)
            ans += cnt[a[i] ^ allPalindrome[j]];

    cout << ans / 2 << '\n';
}

int main()
{
    fast_io();

    markPalindrome();

    int t;
    cin >> t;
    while (t--)
        Nur_Md();

    return 0;
}
