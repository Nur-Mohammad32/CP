#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int mx = 0;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }

        if (count > mx)
        {
            mx = count;
            index = i;
        }
    }

    cout << index << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     int arr[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int i = 0;
//     int count = 0;

//     int row;
//     while (i < n)
//     {
//         int count1 = count;
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == 1)
//             {
//                 count++;
//             }
//         }
//         if (count > count1)
//         {
//             row = i;
//         }
//     }
//     cout << row;

//     return 0;
// }
