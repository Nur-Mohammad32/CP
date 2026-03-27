// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;

//     int count = 0;
//     for (int i = 0; s1[i] != '\0'; i++)
//     {
//         count++;
//     }

//     for (int i = 0; i < count; i++)
//     {
//         s1[i] = tolower(s1[i]);
//         s2[i] = tolower(s2[i]);
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (s1[i] > s2[i])
//         {
//             cout << "1";
//             return 0;
//         }
//         else if (s1[i] < s2[i])
//         {
//             cout << "-1";
//             return 0;
//         }
//     }
//     cout << "0";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    int l = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        l++;
    }

    for (int i = 0; i < l; i++)
    {
        int a = int(s1[i]);

        if (a >= 65 && a <= 90)
        {
            s1[i] = char(a + 32);
        }
    }

    for (int i = 0; i < l; i++)
    {
        int b = int(s2[i]);

        if (b >= 65 && b <= 90)
        {
            s2[i] = char(b + 32);
        }
    }

    for (int i = 0; i < l; i++)
    {
        if (int(s1[i]) > int(s2[i]))
        {
            cout << "1";
            return 0;
        }
        else if (int(s1[i]) < int(s2[i]))
        {
            cout << "-1";
            return 0;
        }
    }
    cout << "0";

    return 0;
}
