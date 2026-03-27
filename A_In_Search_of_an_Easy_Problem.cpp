#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";

    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }

    // if (sum >= 1)
    // {
    //     cout << "HARD";
    // }
    // else
    // {
    //     cout << "EASY";
    // }

    return 0;
}
