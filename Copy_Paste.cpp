// #include <bits/stdc++.h>
// using namespace std;

// #define fast_io()                \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);
// #define mod 1000000007
// #define INF 1000000000000000003

// #define ll long long
// #define ull unsigned long long
// #define ld long double

// #define pb push_back
// #define pob pop_back
// #define mp make_pair
// #define f first
// #define s second

// #define all(x) (x).begin(), (x).end()
// #define vi vector<int>
// #define pi pair<int, int>

// #define for_0(a, b) for (int i = 0; i < b; i++)
// #define for_1st(i, a, b) for (int i = a; i <= b; i++)
// #define for_LAST(i, b, c) for (int i = c; i >= b; i--)
// #define PRINT(a)          \
//     for (auto x : a)      \
//         cout << x << " "; \
//     cout << '\n';
// #define input_vector(v) \
//     for (auto &x : v)   \
//         cin >> x;

// #define nl cout << "\n"
// #define yes_no cout << (ok ? "YES" : "NO") << "\n"

// void Nur_Md()
// {
//     int n;
//     cin >> n;

//     vi v(n);
//     input_vector(v);

//     set<int> st;
//     for_0(i, n)
//         st.insert(v[i]);

//     cout << st.size() << "\n";
// }

// int main()
// {
//     fast_io();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         Nur_Md();
//     }
//     return 0;
// }
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
#define yes_no cout << (ok ? "YES" : "NO") << "\n"

void Nur_Md()
{
    int n;
    cin >> n;
    set<int> st;
    for_0(i, n)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << "\n";
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
