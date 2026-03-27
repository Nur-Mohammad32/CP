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
        if (l % 2 == 0 && s[(l / 2) - 1] == '(' && s[l / 2] == ')')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
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

//         int l = s.size();

//         if (s == "()")
//         {
//             cout << "NO" << endl;
//             continue;
//         }

//         bool flag1 = true;
//         bool flag2 = true;
//         if (l % 2 == 0)
//         {
//             for (int i = 0; i < l / 2; i++)
//             {
//                 if (s[i] != '(')
//                 {
//                     flag1 = false;
//                 }
//             }
//             for (int i = l / 2; i < l; i++)
//             {
//                 if (s[i] != ')')
//                 {
//                     flag2 = false;
//                 }
//             }
//         }
//         if (flag1 == true && flag2 == true)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//         }
//     }

//     return 0;
// }
