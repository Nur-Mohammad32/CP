#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -(n / 2 + 1) << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int n;
//     cin >> n;

//     long long int nsum = 0;
//     for (long long int i = 1;i<=n;i+=2)
//     {
//         nsum += i;
//     }
//     //cout << nsum;

//     long long int psum = 0;
//     for (long long int i = 2; i <= n;i+=2)
//     {
//         psum += i;
//     }
//     //cout << nsum-psum;

//     if(psum>nsum)
//     {
//         cout << psum - nsum;
//     }

//     if(nsum>psum)
//     {
//         cout<<-(nsum - psum);
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int n;
//     cin >> n;

//     long long r = 0;

//     for (long long int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             r -= i;
//         }
//         else
//         {
//             r += i;
//         }
//     }

//     cout << r;
//     return 0;
// }
