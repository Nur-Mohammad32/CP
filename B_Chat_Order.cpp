// #include <bits/stdc++.h>
// using namespace std;

// #define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
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
// #define pi pair<int,int>

// #define for_0(a, b) for (int i = 0; i < b; i++)
// #define for_1st(i, a, b) for (int i = a; i <= b; i++)
// #define for_LAST(i, b, c) for (int i = c; i >= b; i--)
// #define PRINT(a) for (auto x : a) cout << x << " "; cout << '\n';
// #define input_vector(v) for (auto &x : v) cin >> x;

// #define nl cout << "\n"

// void Nur_Md()
// {
//     int n;
//     cin >> n;

//     set<string> st;
//     deque<string> dq;
//     for_0(i,n)
//     {
//         string s;
//         cin >> s;
//         st.insert(s);

//         if(st.find(s)== st.end())
//             dq.push_front(s);
//         else if(st.find(s) != st.end())
//             {
//                 dq.push_front(s);
//                 auto it = find(dq.begin(), dq.end(), s);
//                 if(it !=dq.end())
//                     dq.erase(it);
//             }
//     }

//     PRINT(dq);
// }

// int main()
// {
//     fast_io();
//     Nur_Md();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
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
// #define pi pair<int,int>

// #define for_0(a, b) for (int i = 0; i < b; i++)
// #define for_1st(i, a, b) for (int i = a; i <= b; i++)
// #define for_LAST(i, b, c) for (int i = c; i >= b; i--)
// #define PRINT(a) for (auto x : a) cout << x << " "; cout << '\n';
// #define input_vector(v) for (auto &x : v) cin >> x;
// #define nl cout << "\n"

// void Nur_Md()
// {
//     int n;
//     cin >> n;

//     deque<string> dq;
//     set<string> st;

//     for_0(i, n)
//     {
//         string s;
//         cin >> s;

//         if (st.find(s) != st.end())
//             dq.erase(find(dq.begin(), dq.end(), s));
        
//         dq.push_front(s);
//         st.insert(s);
//     }

//     for (string x : dq)
//         cout << x << endl;
// }

// int main()
// {
//     fast_io();
//     Nur_Md();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
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

    deque<string> dq;
    map<string, int> mp;

    for_0(0, n)
    {
        string s;
        cin >> s;

        if (mp.find(s) != mp.end())
            dq.erase(dq.begin() + mp[s]);

        dq.push_front(s);
        mp[s] = 0;

        for (int j = 1; j < dq.size(); j++)
            mp[dq[j]] = j;
    }

    for (auto &x : dq)
        cout << x << "\n";
}

int main() 
{
    fast_io();
    Nur_Md();
    return 0;
}





