#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int l = s.size();

        bool found = false;
        for (int i = 0; i < l - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << 1 << endl;
        else
            cout << l << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int l = s.length();

//         vector<char> v;
//         for (int i = 0; i < l; i++)
//         {
//             v.push_back(s[i]);
//         }

//         vector<char> v1;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int l = s.length();

//         vector<char> v;
//         for (int i = 0; i < l; i++)
//         {
//             v.push_back(s[i]);
//         }

//         vector<char> v1;

//         int sz = v.size();
//         for (int i = 0; i < sz; i++)
//         {
//             if (i > 2)
//                 if (v[i] == v[i + 1])
//                 {

//                 }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int l = s.size();

//         for (int i = 0; i < l; i++)
//         {
//             if (s[i] == s[i + 1])
//             {
//                 s.erase(s[i + 1]);
//                 s += s[i - 2];
//             }
//         }
//         cout << s << endl;
//     }

//     return 0;
// }
