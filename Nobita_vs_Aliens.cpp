#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int count = 0;

    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        if (arr[l] + arr[r] <= k)
        {
            count++;
            l++;
            r--;
        }
        else
        {
            r--;
        }
    }

    cout << count;

    return 0;
}
