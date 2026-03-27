#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b;
        cin >> a >> b;

        long long int count = 0;
        while(a%b!=0)
        {
            a += 1;
            count += 1;
        }
        cout << count << endl;
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
//         long long a, b;
//         cin >> a >> b;

//         long long r = a % b;
//         long long m;

//         if (r == 0)
//         {
//             m = 0;
//         }
//         else
//         {
//             m = b - r;
//         }

//         cout << m << endl;
//     }

//     return 0;
// }
