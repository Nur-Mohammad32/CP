// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     int mid = N / 2;

//     for (int i = 0; i < N; i++)
//     {
//         if (i < mid)
//         {
//             // top half
//             cout << string(i, ' ')
//                  << '\\'
//                  << string(N - 2 - 2 * i, ' ')
//                  << '/';
//         }
//         else if (i == mid)
//         {
//             // middle row
//             cout << string(mid, ' ') << 'X';
//         }
//         else
//         {
//             // bottom half: mirror of the top
//             int j = N - 1 - i;
//             cout << string(j, ' ')
//                  << '/'
//                  << string(N - 2 - 2 * j, ' ')
//                  << '\\';
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j == i && j == N - 1 - i)
            {
                cout << 'X';
            }
            else if (j == i)
            {
                cout << '\\';
            }
            else if (j == N - 1 - i)
            {
                cout << '/';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
