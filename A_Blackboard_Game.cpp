#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (N % 4 == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
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
//         int n;
//         cin >> n;

//         for (int i = 0; i < n;i++)
//         {
//             for (int j = 0; j < n;j++)
//             {
//                 if((i+j)%4==3)
//                 {

//                 }
//             }
//         }
//     }

//     return 0;
// }
