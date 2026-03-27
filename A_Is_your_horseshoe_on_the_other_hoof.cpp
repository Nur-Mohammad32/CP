// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[4];
//     for (int i = 0; i < 4; i++)
//     {

//         cin >> arr[i];
//     }

//     int count = 0;
//     sort(arr, arr + 4);
//     for (int i = 1; i < 4; i++)
//     {
//         if (arr[i] == arr[i - 1])
//         {
//             count++;
//         }
//     }
//     cout << count;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> horseshoes;

    for (int i = 0; i < 4; i++)
    {
        int color;
        cin >> color;
        horseshoes.insert(color);
    }

    cout << 4 - horseshoes.size();

    return 0;
}
