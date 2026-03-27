// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         int n, m, l, r;
//         cin >> n >> m >> l >> r;

//         int ans1, ans2;
//         if(m==n)
//         {
//             ans1 = l;
//             ans2 = r;
//         }
//         else
//         {
//             ans1=
//         }

//         cout << ans1 << " " << ans2;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int left = max(l, -m);
        int right = left + m;

        cout << left << " " << right << endl;
    }
    return 0;
}
