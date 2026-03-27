#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, a;
        cin >> x >> y >> a;
        double trgt = a + .5;

        long long int tot_round = a / (x + y);
        double depth = tot_round * (x + y);

        if (depth + x > trgt)
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
//         long long int x, y, a;
//         cin >> x >> y >> a;

//         long long int sum = 0;
//         double trgt = a + 0.5;

//         while (true)
//         {
//             sum += x;
//             if (sum > trgt)
//             {
//                 cout << "NO" << endl;
//                 break;
//             }
//             sum += y;
//             if (sum > trgt)
//             {
//                 cout << "YES" << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }
