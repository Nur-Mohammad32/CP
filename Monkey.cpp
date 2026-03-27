// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     while (getline(cin, s))
//     {
//         string s1 = "";
//         for (char c : s)
//         {
//             if (c != ' ')
//             {
//                 s1 += c;
//             }
//         }
//         sort(s1.begin(), s1.end());
//         cout << s1 << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     while (getline(cin, s))
//     {
//         string s1 = "";
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] != ' ')
//             {
//                 s1 += s[i];
//             }
//         }
//         sort(s1.begin(), s1.end());
//         cout << s1 << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int length = 0;
        while (s[length] != '\0')
        {
            length++;
        }

        string s1 = "";
        for (int i = 0; i < length; i++)
        {
            if (s[i] != ' ')
            {
                s1 += s[i];
            }
        }

        int n = 0;
        while (s1[n] != '\0')
        {
            n++;
        }

        char s2[n + 1];
        for (int i = 0; i < n; i++)
        {
            s2[i] = s1[i];
        }
        s2[n] = '\0';

        sort(s2, s2 + n);
        cout << s2 << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char s[1000001];
//     while (cin.getline(s, 1000001))
//     {
//         int length = 0;
//         while (s[length] != '\0')
//             length++;

//         string s1 = "";
//         for (int i = 0; i < length; i++)
//         {
//             if (s[i] != ' ')
//                 s1 += s[i];
//         }

//         int n = 0;
//         while (s1[n] != '\0')
//         {
//             n++;
//         }

//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = 0; j < n - 1; j++)
//             {
//                 if (s1[j] > s1[j + 1])
//                 {
//                     char temp = s1[j];
//                     s1[j] = s1[j + 1];
//                     s1[j + 1] = temp;
//                 }
//             }
//         }

//         cout << s1 << endl;
//     }
//     return 0;
// }
