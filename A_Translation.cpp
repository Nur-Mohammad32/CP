// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     vector<char> v;

//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         v.push_back(s[i]);
//     }

//     bool flag = false;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (t[i] == s[i])
//         {
//             flag = true;
//         }
//     }

//     if (flag == false)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s, t, r;
    cin >> s >> t;

    for (int i = s.length() - 1; i >= 0;i--)
    {
        r =r+ s[i];
    }
    
    if(r==t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

