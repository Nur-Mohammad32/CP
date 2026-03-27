#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long ans_a = abs(a - 1);
        long long ans_b = abs(b - c) + abs(c - 1);

        if (ans_a < ans_b)
        {
            cout << 1 << endl;
        }
        else if (ans_b < ans_a)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
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
//         long long a, b, c;
//         cin >> a >> b >> c;

//         long long ans_a, ans_b;

//         if (a == 1)
//         {
//             cout << "1" << endl;
//             continue;
//         }
//         else if (a > 1)
//         {
//             ans_a = (a - 1);
//         }

//         if ((b == 1) || (b < c))
//         {
//             ans_b = (c - b) + (c - 1);
//         }
//         else
//         {
//             ans_b = abs(c - 1);
//         }

//         if (ans_a < ans_b)
//         {
//             cout << "1" << endl;
//         }
//         else if (ans_b < ans_a)
//         {
//             cout << "2" << endl;
//         }
//         else
//         {
//             cout << "3" << endl;
//         }
//     }

//     return 0;
// }
