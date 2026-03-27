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

// void Nur_Md()
// {
//     string s;
//     cin >> s;

//     vector<char> v;
//     vector<char> v1;
//     vector<char> ans;

//     for (char c : s)
//     {
//         if (isst1(c))
//             v.push_back(c);
//         else
//             v1.push_back(c);
//     }

//     for (char c : s)
//     {
//         if (!v.empty() && c == 'b')
//             v.pop_back();
//         else if (!v1.empty() && c == 'B')
//             v1.pop_back();
//     }

//     ans.insert(ans.end(), v.begin(), v.end());
//     ans.insert(ans.end(), v1.begin(), v1.end());

//     sort(all(ans));

//     PRINT(ans);
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

// void Nur_Md()
// {
//     string s;
//     cin >> s;

//     vector<char> v;
//     for (char c : s)
//     {
//         if (!v.empty() && c == 'b')
//             for (ll i = v.size() - 1; i >= 0; i--)
//             {
//                 if (isst1(v[i]))
//                 {
//                     v.erase(v.begin() + i);
//                     // v.pop_back();
//                     break;
//                 }
//             }
//         else if (!v.empty() && c == 'B')
//             for (ll i = v.size() - 1; i >= 0; i--)
//             {
//                 if (isst2(v[i]))
//                 {
//                     v.erase(v.begin() + i);
//                     // v.pop_back();
//                     break;
//                 }
//             }
//         else
//             v.push_back(c);

//         if (v[0] == 'b' || v[0] == 'B')
//             v.pop_back();
//     }

//     for (auto x : v)
//         cout << x;
//     nl;
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
void Nur_Md()
{
    string s;
    cin >> s;

    vector<char> ans;
    stack<int> st1, st2;

    for (char c : s)
    {
        if (c == 'b')
        {
            if (!st1.empty())
            {
                int pos = st1.top();
                st1.pop();
                ans[pos] = 0;
            }
        }
        else if (c == 'B')
        {
            if (!st2.empty())
            {
                int pos = st2.top();
                st2.pop();
                ans[pos] = 0;
            }
        }
        else
        {
            ans.push_back(c);
            if (islower(c))
                st1.push(ans.size() - 1);
            else if (isupper(c))
                st2.push(ans.size() - 1);
        }
    }

    for (char c : ans)
        if (c)
            cout << c;
    nl;
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
        Nur_Md();
    return 0;
}
