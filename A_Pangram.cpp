// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int a = int(s[i]);
//         if((a>=65&&a<=90) || (a>=97 && a<=122))
//         {
//             count++;
//         }
//     }
//     if(count>=26)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<char> v;
//     {
//         for (int i = 0; i < n; i++)
//         {
//             char ch;
//             cin >> ch;
//             v.push_back(ch);
//         }
//     }

//     sort(v.begin(), v.end());

//     int count = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i + 1] != v[i])
//         {
//             count++;
//         }
//     }

//     if (count >= 26)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     // cout << count;

//     // for (int i = 0; i < v.size();i++)
//     // {
//     //     cout << v[i];
//     // }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     bool present[26] = {false};
//     int count = 0;

//     for (char ch : s)
//     {
//         ch = tolower(ch);
//         int index = ch - 'a';

//         if (!present[index])
//         {
//             present[index] = true;
//             count++;
//         }
//     }

//     if (count == 26)
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> unique_letters;

    for (char ch : s)
    {
        unique_letters.insert(tolower(ch));
    }

    if (unique_letters.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
