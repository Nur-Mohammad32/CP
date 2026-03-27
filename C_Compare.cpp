// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string x, y;
//     cin >> x >> y;

//     int i = 0;
//     while (true)
//     {
//         if (x[i] > y[i])
//         {
//             cout << y << endl;
//             break;
//         }
//         else if (x[i] < y[i])
//         {
//             cout << x << endl;
//             break;
//         }
//         else if (x[i] == y[i])
//         {
//             i++;
//         }
//     }
//     if(x==y)
//     {
//         cout << x;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    
    if (x < y)
    {
        cout << x << endl;
    }
    else if (x > y)
    {
        cout << y << endl;
    }
    else
    {
        cout << x << endl;
    }

    return 0;
}
