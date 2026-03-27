#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, T;
    cin >> S >> T;

    int count = 0;

    int a = 0;
    while (true)
    {
        if (a > S)
            break;
        int b = 0;
        while (true)
        {
            if (b > S)
                break;
            int c = 0;
            while (true)
            {
                if (c > S)
                    break;
                if ((a + b + c) <= S && (a * b * c) <= T)
                    count++;
                c++;
            }
            b++;
        }
        a++;
    }
    cout << count << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int s, t;
//     cin >> s >> t;

//     // int a = 0;
//     // int b = 0;
//     // int c = 0;

//     int count = 0;
//     for (int i = 0; i < 100; i++)
//     {
//         for (int j = 0; j < 100; j++)
//         {
//             for (int k = 0; k < 100; k++)
//             {
//                 if ((i + j + k) <= s && (i * j * k) <= t)
//                     count++;
//             }
//         }
//     }

//     cout << count << endl;

//     return 0;
// }
