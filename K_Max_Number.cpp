#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    int mx = maxElement(arr, n - 1);

    return max(arr[n - 1], mx);
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

    int ans = maxElement(arr, n);
    cout << ans;

    return 0;
}
