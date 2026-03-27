#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        if (l1 + l2 + l3 == b1 && b1 == b2 && b2 == b3)
            cout << "YES" << endl;
        else if (l2 + l3 == l1 && b2 == b3 && b1 + b2 == l1)
            cout << "YES" << endl;
        else if (b1 + b2 + b3 == l1 && l1 == l2 && l2 == l3)
            cout << "YES" << endl;
        else if (b2 + b3 == b1 && l2 == l3 && l1 + l2 == b1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
//         int l1, b1, l2, b2, l3, b3;
//         cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

//         long long area = (l1 * b1) + (l2 * b2) + (l3 * b3);
//         double ans = sqrt(area);

//         bool found = false;
//         for (int i = 1; i <= 100; i++)
//         {
//             if (ans == i)
//             {
//                 found = true;
//                 break;
//             }
//         }

//         if (found)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l1, b1, l2, b2, l3, b3;
//         cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

//         int mx_length = max({l1, l2, l3});
//         int mx_breadth = max({b1, b2, b3});

//         if (l1 == l2 && l2 == l3 && l3 == l1 && (b1 + b2 + b3) == l1)
//         {
//             cout << "YES" << endl;
//             break;
//         }
//         else if (b1 == b2 && b2 == b3 && b3 == b1 && (l1 + l2 + l3) == b1)
//         {
//             cout << "YES" << endl;
//             break;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
