#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            long long x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (c == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (c == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top() << endl;
                }
            }
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// void print(map<long long, int> &mp)
// {
//     if (mp.empty())
//     {
//         cout << "Empty" << endl;
//     }
//     else
//     {
//         cout << mp.begin()->first << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     map<long long, int> mp;

//     for (int i = 0; i < n; i++)
//     {
//         long long x;
//         cin >> x;
//         mp[x]++;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int c;
//         cin >> c;
//         if (c == 0)
//         {
//             long long x;
//             cin >> x;
//             mp[x]++;
//             print(mp);
//         }
//         else if (c == 1)
//         {
//             print(mp);
//         }
//         else if (c == 2)
//         {
//             if (mp.empty())
//             {
//                 cout << "Empty" << endl;
//             }
//             else
//             {
//                 auto it = mp.begin();
//                 long long fst = it->first;

//                 mp[fst]--;

//                 if (mp[fst] == 0)
//                 {
//                     mp.erase(fst);
//                 }
//                 print(mp);
//             }
//         }
//     }
//     return 0;
// }
