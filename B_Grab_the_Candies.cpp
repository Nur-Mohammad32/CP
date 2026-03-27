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
        long long even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even += x;
            else
                odd += x;
        }

        if (even > odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
//         vector<int> v, v1;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             if (x % 2 == 0)
//                 v.push_back(x);
//             else
//                 v1.push_back(x);
//         }

//         sort(v.rbegin(), v.rend());
//         sort(v1.rbegin(), v1.rend());

//         int mihai = 0, bianca = 0;
//         bool flag = true;

//         while (!v.empty() || !v1.empty())
//         {
//             if (!v.empty())
//             {
//                 mihai += v.back();
//                 v.pop_back();
//                 if (mihai <= bianca)
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
//             if (!v1.empty())
//             {
//                 bianca += v1.back();
//                 v1.pop_back();
//                 if (mihai <= bianca)
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
//         }

//         if (flag)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }
