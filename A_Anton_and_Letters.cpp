// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     int l = s.length();

//     vector<char> v;

//     for (int i = 0; i < l; i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             v.push_back(s[i]);
//         }
//     }

//     if(v.size()==0)
//     {
//         cout << "0";
//         return 0;
//     }
//     sort(v.begin(), v.end());

//     int count = 1;

//     for (int i = 1; i < v.size(); i++)
//     {
//         if (v[i] != v[i-1])
//         {
//             count++;
//         }
//     }
//     cout << count;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    bool freq[26] = {false};
    int count = 0;

    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            int i = c - 'a';
            if (!freq[i])
            {
                freq[i] = true;
                count++;     
            }
        }
    }

    cout << count;

    return 0;
}
