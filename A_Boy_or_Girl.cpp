// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int l = s.size();

//     for (int i = 0; i < l; i++)
//     {
//         for (int j = i + 1; j < l; j++)
//         {
//             if (s[i] == s[j])
//             {
//                 for (int k = j; k < l - 1; k++)
//                 {
//                     s[k] = s[k + 1];
//                 }
//                 l--;
//             }
//         }
//     }

//     if (l % 2 == 0)
//     {
//         cout << "CHAT WITH HER!";
//     }
//     else
//     {
//         cout << "IGNORE HIM!";
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
    vector<int> v1;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 'a';
        v.push_back(x);
    }
    int l = v.size();

    sort(v.begin(), v.end());

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = i + 1; j < l; j++)
    //     {
    //         if (v[i] != v[j])
    //         {
    //             v1.push_back(s[i]);
    //         }
    //     }
    // }

    // int i = 0;
    // while (i < l - 1)
    // {
    //     int j = i + 1;
    //     while (j < l)
    //     {
    //         if (v[i] != v[j])
    //         {
    //             v1.push_back(v[i]);
    //             j++;
    //         }
    //     }
    //     i++;
    // }

    // cout << v1.size() << endl;

    int count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[i - 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }
    return 0;
}
