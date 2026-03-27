// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int count = 0;
//     // for (int i = 1; i <= n;i+=5)
//     // {
//     //     count++;
//     // }

//     int a = n / 5;

//     //cout << count;
//     cout << a;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int b = n % 5;
    int c = n / 5;
    int d;
    if (b != 0)
    {
        d = c * 5 + 5;
    }
    else
    {
        d = n;
    }

    int e = d / 5;
    cout << e;
    return 0;
}
