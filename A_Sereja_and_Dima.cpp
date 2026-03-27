#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];

    int dima = 0, sereja = 0, who = 1;

    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);

        if (who % 2 != 0)
            sereja += mx;
        else
            dima += mx;

        if (mx == left)
            dq.pop_front();
        else
            dq.pop_back();

        who++;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     int l = 0, r = n - 1;
//     int sereja = 0, dima = 0;
//     bool flag = true;

//     while (l <= r)
//     {
//         int c;
//         if (v[l] > v[r])
//         {
//             c = v[l];
//             l++;
//         }
//         else
//         {
//             c = v[r];
//             r--;
//         }

//         if (flag == 0)
//             sereja += c;
//         else
//             dima += c;

//         flag = !flag;
//     }

//     cout << dima << " " << sereja << endl;

//     return 0;
// }
