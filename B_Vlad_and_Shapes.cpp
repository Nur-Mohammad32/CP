#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int grid[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                grid[i][j] = c - '0';
            }
        }

        bool triangle = false;

        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    cnt++;
                }
            }

            if (cnt == 1)
            {
                triangle = true;
                break;
            }
        }

        if (triangle)
            cout << "TRIANGLE" << endl;
        else
            cout << "SQUARE" << endl;
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
//         int n;
//         cin >> n;

//         int arr[n][n];
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 cin >> arr[i][j];

//         int count1 = 0;
//         int count0 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (arr[i][j] == 1)
//                     count1++;
//                 else
//                     count0++;
//             }
//         }

//         vector<int> v = {4, 9, 16, 25, 36, 49, 64, 72, 81, 100};

//         bool square = false;
//         for (int i = 0; i < v.size(); i++)
//         {
//             if ((count1 == v[i]) || (count0 == v[i]))
//                 square = true;
//         }

//         if (square)
//             cout << "SQUARE" << endl;
//         else
//             cout << "TRIANGLE" << endl;
//     }

//     return 0;
// }
