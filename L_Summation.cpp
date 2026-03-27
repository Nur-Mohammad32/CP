#include <bits/stdc++.h>
using namespace std;

long long summation(int arr[], int i, int n)
{
    if (i == n)
        return 0;

    return arr[i] + summation(arr, i + 1, n);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long ans = summation(arr, 0, n);
    cout << ans;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int summation(int arr[], int n)
// {
//     long long sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     long long ans = summation(arr, n);
//     cout << ans;

//     return 0;
// }
