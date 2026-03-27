#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int i)
{
    if(i>=n)
    {
        return;
    }

    print(arr, n, i + 2);
    cout << arr[i] << " ";
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

    int i = 1;
    print(arr, n, 0);
    return 0;
}
