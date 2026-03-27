#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{

    int max = *max_element(arr, arr + n);
    int min = *min_element(arr, arr + n);
    cout << min << " " << max;
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
    print(arr, n);
    return 0;
}
