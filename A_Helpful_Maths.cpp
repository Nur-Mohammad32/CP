// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     string s;
//     cin >> s;

//     int l = s.length();
//     int count1 = 0;
//     int count2 = 0;
//     int count3 = 0;

//     for (int i = 0; i < l; i++)
//     {
//         if (s[i] == '1')
//         {
//             count1++;
//         }
//         if (s[i] == '2')
//         {
//             count2++;
//         }
//         if (s[i] == '3')
//         {
//             count3++;
//         }
//     }

//     bool first = true;

//     for (int i = 0; i < count1; i++)
//     {
//         if (first == false)
//         {
//             cout << "+";
//         }
//         cout << "1";
//         first = false;
//     }
//     for (int i = 0; i < count2; i++)
//     {
//         if (first == false)
//         {
//             cout << "+";
//         }
//         cout << "2";
//         first = false;
//     }

//     for (int i = 0; i < count3; i++)
//     {
//         if (first == false)
//         {
//             cout << "+";
//         }
//         cout << "3";
//         first = false;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (char c : s)
    {
        if (c != '+')
        {
            v.push_back(c - '0');
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0)
        {
            cout << "+";
        }
        cout << v[i];
    }

    return 0;
}
