#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        int n = y;

        int d1 = n % 10;
        n = n / 10;

        int d2 = n % 10;
        n = n / 10;

        int d3 = n % 10;
        n = n / 10;

        int d4 = n % 10;

        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
        {
            cout << y;
            break;
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     vector<int> v;

//     for (int i = 0; i < 4;i++)
//     {
//         int x = s[i] - '0';
//         v.push_back(x);
//     }

//     int n = 0;
//     for(int x : v)
//     {
//         n = n * 10 + x;
//     }

//     int i = n;
//     while(i<=9000)
//     {
//         for (int i = 0; i < 4;i++)
//         {
//             if(s[i]!=s[i+1])
//             {

//             }
//         }
//     }

//     // for (int i = 0; i < 4;i++)
//     // {
//     //     cout << v[i];
//     // }
//         return 0;
// }
